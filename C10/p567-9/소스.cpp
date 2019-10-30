#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct PRODUCT {
	char name[20];
	int price;
	int stock;
};
int order(struct PRODUCT a, int n) {
	int price = a.price * n;
	int stock = a.stock - n;

	if (stock <= 0) {
		printf("재고가 부족합니다.\n");
		return 0;
	}
	else {
		printf("결제 금액: %d 재고: %d\n", price, stock);
	}
	return stock;
}
int main(void) {
	struct PRODUCT a;
	int n;

	printf("제품명? ");
	scanf("%s", a.name);
	printf("가격? ");
	scanf("%d", &a.price);
	printf("재고? ");
	scanf("%d", &a.stock);

	for (;;) {
	star:
		printf("주문 수량? ");
		scanf("%d", &n);

		if (n == 0) {
			break;
		}
		if (order(a, n) == 0) {
			goto star;
		}

		a.stock = a.stock - n;
	}
	return 0;
}