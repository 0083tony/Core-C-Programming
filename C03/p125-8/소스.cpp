#include<stdio.h>
int main(void) {
	float a;

	printf("길이(yd)? ");
	scanf_s("%f", &a);

	// %.0f == 소수점 표기 x
	printf("%.0f yd = %f m", a, 0.9144 * a);

	return 0;
}