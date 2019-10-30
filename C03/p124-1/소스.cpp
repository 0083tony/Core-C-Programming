#include<stdio.h>
int main(void) {
	int i;

	printf("한 변의 길이 ? ");
	scanf_s("%d", &i);

	// printf문 안에서 연산 가능
	printf("정사각형의 넓이: %d\n", i * i);
	printf("정사각형의 둘레: %d ", i * 4);

	return 0;
}