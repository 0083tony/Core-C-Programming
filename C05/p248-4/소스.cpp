#include<stdio.h>
int main(void) {
	int year;

	printf("����? ");
	scanf_s("%d", &year);

	// �Է¹��� ������ 400���� ���������� �������� 0 �̸� ����
	if (year % 400 == 0) {
		printf("%d���� �����Դϴ�.", year);
	}
	// �Է¹��� ������ 4�� ���������� �������� 0�̰� 100���� ���������� �������� 0�� �ƴϸ� ����
	if (year % 4 == 0 && year % 100 != 0) {
		printf("%d���� �����Դϴ�.", year);
	}
	else {
		printf("%d���� ������ �ƴմϴ�.", year);
	}

	return 0;
}