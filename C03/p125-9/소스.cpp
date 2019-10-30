#include<stdio.h>
int main(void) {
	float a;

	printf("무게(ld)? ");
	scanf_s("%f", &a);

	// %.0f == 소수점 표기x
	printf("%.0f ld = %f kg", a, 0.45359237 * a);

	return 0;
}