#include<stdio.h>
int main(void) {
	float a, b;

	printf("힘(N)? ");
	scanf_s("%f", &a);
	printf("높이(m)? ");
	scanf_s("%f", &b);

	// printf문 안에서 연산 가능, %.2f == 소수점 둘째 자리에서 반올림
	printf("일의 양: %.2f J", a * b);

	return 0;
}