#include<stdio.h>
int is_even(int a) {
	int even = 0;

	// 2�� ���� �������� 0 == ¦��
	if (a % 2 == 0) {
		even++;
	}
	return even;
}
int is_odd(int a) {
	int odd = 0;

	// 2�� ���� �������� 1 == Ȧ��
	if (a % 2 == 1) {
		odd++;
	}
	return odd;
}
int main(void) {
	int a;
	int odd = 0;
	int even = 0;

	printf("������ ��ĭ���� �����ؼ� �Է��ϼ���.(�������� 0 �Է�)\n");

	// ���ѷ��� for(;;) == while(1)
	for (;;) {
		scanf_s("%d", &a);

		if (is_odd(a) == 1) {
			odd++;
		}
		else {
			even++;
		}
		// 0�� �Է��ϸ� ¦���� Ȧ���� ������ ����ϰ� ���ѷ��� Ż��
		if (a == 0) {
			// �������� �ԷµǴ� 0�� ¦���� �Էµȴ� �׷��Ƿ� even - 1
			printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d���Դϴ�.", even - 1, odd);
			break;
		}
	}
	return 0;
}