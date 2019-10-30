#include<stdio.h>
int main(void)
{
	char ch;
	int num;

	// %c로 문자 %d로 정수를 입력
	printf("커피 사이즈 S,T,G 와 수량?? ");
	scanf_s("%c %d", &ch, 10, &num);

	// %c로 문자 %d로 정수를 출력
	printf("%c 사이즈 %d잔을 주문.", ch, num);

	return 0;
}