#include<stdio.h>
int main(void) {
	float a;

	printf("ȭ���µ�? ");
	scanf_s("%f", &a);

	printf("%.2f F = %.2f C", a, (a - 32) * 5 / 9);

	return 0;
}