#include<stdio.h>
int main(void)
{
	float x;

	// 실수는 %f로 입력 받는다.
	printf("몸무게? ");
	scanf_s("%f", &x);

	// %.2f == 소수점 둘째 자리에서 반올림
	printf("입력한 몸무게는 %.2fKG입니다.", x);

	return 0;
}