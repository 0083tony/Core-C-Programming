#include<stdio.h>
#include<math.h> // pow()함수
int main(void) {
	int a, b;

	printf("금액? ");
	scanf_s("%d", &a);
	printf("절사단위 (10의 지수승)? ");
	scanf_s("%d", &b);

	// pow() == 제곱근  ex) 2^4 == pow(2,4);
	b = pow(10, b);
	a = a - (a % b);

	printf("금액(%d 미만 절사): %d", b, a);

	return 0;
}