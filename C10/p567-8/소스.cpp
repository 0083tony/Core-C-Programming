#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct PRODUCT {
	char name[20];
	int price;
	int stock;
};
void printf_product(struct PRODUCT a) {
	printf("[ %s  %d��  ���:%d ]", a.name, a.price, a.stock);
}
int main(void) {
	struct PRODUCT a;

	printf("��ǰ��? ");
	scanf("%s", a.name);
	printf("����? ");
	scanf("%d", &a.price);
	printf("���? ");
	scanf("%d", &a.stock);

	printf_product(a);

	return 0;
}