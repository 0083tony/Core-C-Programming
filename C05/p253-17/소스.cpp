#include<stdio.h>
int main(void) {
	int a, b = 0;

	printf("���� �ð�(��)? ");
	scanf_s("%d", &a);

	if (a > 1440) {
		printf("���� �ð��� 24�ð��� ���� �� ����.");
		return 0;
	}
	if (a < 31) {
		printf("���� ���: 2000��\n");
		return 0;
	}
	else if (a > 30) {
		b = 2000 + (a - 30) / 10 * 1000;
	}
	if (b > 25000) {
		printf("���� ���: 25000��\n");
		return 0;
	}
	else {
		printf("���� ���: %d��\n", b + 1000);
		return 0;
	}
}