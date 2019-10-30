#include<stdio.h>
int main(void) {
	float a;

	printf("길이(inch)? ");
	scanf_s("%f", &a);

	// printf문 안에서 연산 가능
	printf("%f inch = %f cm", a, 2.54 * a);

	return 0;
}