#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct PRODUCT {
	char name[50] = "";
	int price;
	int stock;
	int amount;
};
int main(void) {
	struct PRODUCT a[5] = {
		{"아메리카노",4000,10},{"카페라떼  ",4500,10},
		{"프라푸치노",5000,10},{"플랫화이트",5000,10},
		{"치즈케이크",9900,10}
	};
	struct PRODUCT input;
	int stock[5] = { 10,10,10,10,10 };

	for (;;) {
	start:
		printf("제품명? ");
		scanf("%[^\n]s", input.name);

		if (*input.name == '.') break;
		
		printf("주문할 수량?  ");
		scanf("%d", &input.amount);

		getchar(); // 버퍼값을 비우지 않으면 scanf 무시

		for (int i = 0; i < 5; i++) {

			if (*a[i].name == *input.name) {

				if (a[i].stock >= input.amount) {
					a[i].stock = a[i].stock - input.amount;
					printf("결제 금액: %d  %s 재고: %d\n", input.amount * a[i].price, a[i].name, a[i].stock);
					goto start;
				}
			}
		}
		printf("제품명이 잘못되었습니다.\n");
	}

	for (int i = 0; i < 5; i++) {
		printf("[ %s  %d원  재고:%d ]\n", a[i].name, a[i].price, a[i].stock);
	}
	return 0;
}