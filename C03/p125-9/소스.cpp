#include<stdio.h>
int main(void) {
	float a;

	printf("����(ld)? ");
	scanf_s("%f", &a);

	// %.0f == �Ҽ��� ǥ��x
	printf("%.0f ld = %f kg", a, 0.45359237 * a);

	return 0;
}