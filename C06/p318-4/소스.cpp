#include<stdio.h>
int discount_price(int a, int b) {

	return (1 - (0.01 * a)) * b;
}
int main(void) {
	int a, b;

	printf("할인율(%%)? ");
	scanf_s("%d", &a);

	// 무한루프 for(;;) == while(1)
	for (;;) {
		printf("제품의 가격? ");
		scanf_s("%d", &b);
		printf("할인가: %d원\n", discount_price(a, b));
		// b == 0 무한루프 탈출
		if (b == 0) {
			break;
		}
	}
	return 0;
}