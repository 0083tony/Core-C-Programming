#include<stdio.h>
int main(void) {
	float a;

	printf("����(yd)? ");
	scanf_s("%f", &a);

	// %.0f == �Ҽ��� ǥ�� x
	printf("%.0f yd = %f m", a, 0.9144 * a);

	return 0;
}