#include<stdio.h>
int main(void)
{
	float x;
	x = 3.13159265;

	printf("pi =  %.2f\n", x); // %.2f 는 소수점 아래 2자리만 표시
	printf("pi =  %.4f\n", x);
	printf("pi =  %.6f\n", x);
	printf("pi =  %.8f\n", x);
	printf("pi =  %e\n", x); // %e는 지수 출력

	return 0;
}