#include<stdio.h>
int main(void) {
	double a, b, c;

	printf("원금? ");
	scanf_s("%lf", &a);
	printf("연이율(%%)? ");
	scanf_s("%lf", &b);

	// for문을 사용해 10번 반복
	for (int i = 0; i < 10; ++i) {
		
		// 이자 c를 계산
		c = a * (b * 0.01);
		
		// 원리합계 a를 계산
		a = a + c;
		printf("%2d년째 이자: %.2lf, 원리합계: %.2lf\n", i + 1, c, a);
	}

	return 0;
}