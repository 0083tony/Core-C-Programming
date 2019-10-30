#include<stdio.h>
int main(void) {
	float a;

	printf("아파트의 면적(제곱미터)? ");
	scanf_s("%f", &a);

	// pritnf문 안에서 연산 가능, %.2f == 소수점 둘째 자리에서 반올림
	printf("%.2f 제곱미터 = %.2f 평", a, 0.3025 * a);

	return 0;
}