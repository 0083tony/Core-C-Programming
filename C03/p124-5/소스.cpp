#include<stdio.h>
int main(void) {
	float a;

	printf("����(inch)? ");
	scanf_s("%f", &a);

	// printf�� �ȿ��� ���� ����
	printf("%f inch = %f cm", a, 2.54 * a);

	return 0;
}