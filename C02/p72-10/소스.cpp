#include<stdio.h>
int main(void)
{
	int x;

	printf("8진수로 입력하려면  012, 16진수로 입력하려면 0x12처럼 입력하시오.\n");
	printf("정수?? ");
	scanf_s("%i", &x); // 8,10,16진수 3가지 방법으로 입력 가능.

	printf("8진수: %o\n", x); // %o 8진정수 출력
	printf("10진수: %d\n", x); // %d 10진정수 출력
	printf("16진수: %x\n", x); // %x 16진정수 출력

	return 0;
}