#include<stdio.h>
int main(void)
{
	float x, y;

	// %f로 실수 입력
	printf("실수 2개? ");
	scanf_s("%f %f", &x, &y);

	//  %f로 실수 출력
	printf("%f + %f = %f\n", x, y, x + y);
	printf("%f - %f = %f\n", x, y, x - y);

	return 0;
}