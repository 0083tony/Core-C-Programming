#include<stdio.h>
int main(void) {
	float a;
	char b;

	printf("�µ�? ");
	scanf_s("%f %c", &a, &b, 20);

	// ||(or)�� ����ϸ� c,C f,F ��ҹ��� ���о��� �Է¹��� �� �ִ�.
	if (b == 'c' || b == 'C') {
		printf("%.2f C ==> %.2f F ", a, a * 9 / 5 + 32);
	}
	if (b == 'f' || b == 'F') {
		printf("%.2f F ==> %.2f C ", a, (a - 32) * 5 / 9);
	}

	return 0;
}