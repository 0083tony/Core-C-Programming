#include<stdio.h>
int main(void) {
	float a, b;

	printf("질량(g)? ");
	scanf_s("%f", &a);
	printf("부피(세제곱센티미터)? ");
	scanf_s("%f", &b);

	printf("밀도: %f", a / b);

	return 0;
}