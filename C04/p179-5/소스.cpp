#include<stdio.h>
int main(void) {
	float a, b;

	printf("반지름의 길이?  ");
	scanf_s("%f", &a);
	printf("높이? ");
	scanf_s("%f", &b);

	printf("원기둥의 부피: %f", 3.141592 * a * a * b);

	return 0;
}