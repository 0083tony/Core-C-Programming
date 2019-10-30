#include<stdio.h>
int main(void)
{
	// 문자열 사용시 배열의 크기도 입력
	char x[30], y[30], z[30];

	printf("이름? ");
	scanf_s("%s", x, 30);

	printf("학과? ");
	scanf_s("%s", y, 30);

	printf("학번? ");
	scanf_s("%s", z, 30);

	printf("===================================\n");
	printf("이름: %s\n", x);
	printf("학과: %s\n", y);
	printf("학번: %s\n", z);
	printf("===================================");

	return 0;
}