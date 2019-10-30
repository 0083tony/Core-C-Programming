#include<stdio.h>
int main(void) {
	float a, b;

	printf("KRW? ");
	scanf_s("%f", &a);

	printf("원/달러 환율? ");
	scanf_s("%f", &b);

	// %.0f == 소수점 0번 자리 까지 출력, %.2f == 소수점 둘째 자리까지 출력
	printf("KRW %.0f = USD %.2f", a, a / b);

	return 0;
}