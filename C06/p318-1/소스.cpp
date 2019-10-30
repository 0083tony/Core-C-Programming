#include<stdio.h>
int get_perimeter(int a, int b) {
	// 직사각형의 둘레 = (가로 + 세로) * 2
	return (a + b) * 2;
}
int main(void) {
	int a, b;

	printf("가로? ");
	scanf_s("%d", &a);
	printf("세로? ");
	scanf_s("%d", &b);

	printf("직사각형의 둘레: %d", get_perimeter(a, b));

	return 0;
}