#include<stdio.h>
int main(void) {
	float a, b;

	printf("�������� ����?  ");
	scanf_s("%f", &a);
	printf("����? ");
	scanf_s("%f", &b);

	printf("������� ����: %f", 3.141592 * a * a * b);

	return 0;
}