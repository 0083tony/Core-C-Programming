#include<stdio.h>
int main(void) {
	float a, b;

	printf("USD? ");
	scanf_s("%f", &a);

	printf("원/달러 환율? ");
	scanf_s("%f", &b);

	// %.2f == 소수점 둘째 자리까지 출력
	printf("USD %.2f = KRW %.2f", a, a * b);

	return 0;
}