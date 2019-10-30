#include<stdio.h>
int main(void) {
	float a, b;

	printf("질량(kg)? ");
	scanf_s("%f", &a);
	printf("높이(m)? ");
	scanf_s("%f", &b);

	// printf문 안에서 연산 가능
	printf("위치에너지: %f J", 9.8 * a * b);

	return 0;
}