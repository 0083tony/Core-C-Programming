#include<stdio.h>
int main(void) {
	int a, b;

	printf("기본 요금? ");
	scanf_s("%d", &a);
	printf("월 사용량(kwh)? ");
	scanf_s("%d", &b);

	printf("전기요금: %d원", a + b * 190);

	return 0;
}