#include<stdio.h>
int main(void) {
	double a, b, c;

	printf("원/달러 매매기준율? ");
	scanf_s("%lf", &a);
	printf("환율우대율(0~100)? ");
	scanf_s("%lf", &b);

	printf("달러 살 때 환율은 %lf입니다.", a + (a * 0.0175 * (1 - (0.01 * b))));

	printf("\n구입할 달러(USD)? ");

	scanf_s("%lf", &c);
	printf("USD %.2lf 살 때 ==> KRW %.2lf", c, c * (a + (a * 0.0175 * (1 - (0.01 * b)))));

	return 0;
}