#include<stdio.h>
int main(void) {
	float a, b;

	printf("USD? ");
	scanf_s("%f", &a);

	printf("��/�޷� ȯ��? ");
	scanf_s("%f", &b);

	// %.2f == �Ҽ��� ��° �ڸ����� ���
	printf("USD %.2f = KRW %.2f", a, a * b);

	return 0;
}