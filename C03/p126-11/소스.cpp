#include<stdio.h>
int main(void) {
	float a, b;

	printf("KRW? ");
	scanf_s("%f", &a);

	printf("��/�޷� ȯ��? ");
	scanf_s("%f", &b);

	// %.0f == �Ҽ��� 0�� �ڸ� ���� ���, %.2f == �Ҽ��� ��° �ڸ����� ���
	printf("KRW %.0f = USD %.2f", a, a / b);

	return 0;
}