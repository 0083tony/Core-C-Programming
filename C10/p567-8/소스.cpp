#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct PRODUCT {
	char name[20];
	int price;
	int stock;
};
void printf_product(struct PRODUCT a) {
	printf("[ %s  %d원  재고:%d ]", a.name, a.price, a.stock);
}
int main(void) {
	struct PRODUCT a;

	printf("제품명? ");
	scanf("%s", a.name);
	printf("가격? ");
	scanf("%d", &a.price);
	printf("재고? ");
	scanf("%d", &a.stock);

	printf_product(a);

	return 0;
}