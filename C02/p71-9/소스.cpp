#include<stdio.h>
int main(void)
{
	int x;

	printf("16진수 정수? ");
	// %x는 16진수를 입력받는다.
	scanf_s("%x", &x);

	// %x는 16진수를 출력한다.
	// 16진수는 %x %X 두가지 방법으로 출력 가능
	// ex) %x == ff12, %X == FF12
	printf("16진수 %x는 10진수로 %d입니다.", x, x);

	return 0;
}