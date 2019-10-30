#include<stdio.h>
int main(void) {
	int a, b;

	printf("가로의 길이? ");
	scanf_s("%d", &a);
	printf("세로의 길이? ");
	scanf_s("%d", &b);

	// printf문 안에서 연산 가능
	printf("직사각형의 넓이: %d\n", a * b);
	printf("직사각형의 둘레: %d\n", 2 * (a + b));

	return 0;
}