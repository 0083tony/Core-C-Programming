#include<stdio.h>
int check_date(int year, int month, int date) {
	int err = 0;

	// �������� �ƴ��� �˻� �����϶� 2���� 29�ϱ���
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
		// ���� 0���� �۰ų� 12���� Ŭ ��� err�� 1�� ���Ѵ�.
		if (month < 0 || month > 12) {
			err++;
		}
		// 8���� ������ ¦�� ���� 30�� Ȧ�� ���� 31�ϱ��� �ִ�.
		else if ((month % 2 == 0 && date > 30) && month != 8) {
			err++;
		}
		else if (month == 2 && date > 29) {
			err++;
		}
		else if (month % 1 == 0 && date > 31) {
			err++;
		}
	}
	else if (month < 0 || month > 12) {
		err++;
	}
	else if ((month % 2 == 0 && date > 30) && month != 8) {
		err++;
	}
	// ������ �ƴ϶�� 2���� 28�ϱ��� 
	else if (month == 2 && date > 28) {
		err++;
	}
	else if (month % 1 == 0 && date > 31) {
		err++;
	}
	
	return err;
}
int main(void) {
	int year, month, date;

	for (;;) {
		printf("��¥ (�� �� ��)? ");
		scanf_s("%d %d %d", &year, &month, &date);

		// ���ϰ� 0 == �ùٸ� ��¥, ���ϰ� 1 == �߸��� ��¥
		if (check_date(year, month, date) == 0) {
			printf("�Է��� ��¥�� %d�� %d�� %d�� �Դϴ�.\n", year, month, date);
			break;
		}
		else {
			printf("�߸� �Է��ϼ̽��ϴ�. ��ȿ�� ��¥�� �Է��ϼ���.\n");
		}
	}
	return 0;
}