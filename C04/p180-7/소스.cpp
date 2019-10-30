#include<stdio.h>
#include<math.h> // sqrt()함수
int main(void) {
	double a, b;

	printf("및변? ");
	scanf_s("%lf", &a);
	printf("높이? ");
	scanf_s("%lf", &b);

	// sqrt() == 루트 연산
	printf("빗변의 길이: %lf", sqrt(a * a + b * b));

	return 0;
}