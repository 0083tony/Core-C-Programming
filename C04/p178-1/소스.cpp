#include<stdio.h>
int main(void) {
	float a, b;

	printf("질량(kg)? ");
	scanf_s("%f", &a);
	printf("속력(m/s)? ");
	scanf_s("%f", &b);

	printf("운동에너지: %.2f J", a / 2 * b * b);

	return 0;
}