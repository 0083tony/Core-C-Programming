#include<stdio.h>
#include<math.h> //pow()함수
// PI값을 정의
#define PI 3.141592

int main(void) {
	double a, b;

	printf("반지름의 길이? ");
	scanf_s("%lf", &a);

	// base^n 을 계산하는 함수
	b = pow(a, 3);

	printf("구의 부피: %lf", 4 * PI * b / 3);

	return 0;
}