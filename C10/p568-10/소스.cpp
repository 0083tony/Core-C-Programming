#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct PRODUCT {
	char name[50] = "";
	int price;
	int stock;
};
int main(void) {
	struct PRODUCT a[5];
	int n = 0;

	for (;;) {
		printf("제품명? ");
		scanf("%[^\n]s", a[n].name);

		if (*a[n].name == '.') {
			break;
		}

		printf("가격 재고?  ");
		scanf("%d %d", &a[n].price, &a[n].stock);
		getchar(); // 버퍼값을 비우지 않으면 scanf 무시
		n++;

		if (n == 5) {
			break;
		}
	}

	for (int i = 0; i < n; i++) {
		printf("[ %s  %d원  재고:%d ]\n", a[i].name, a[i].price, a[i].stock);
	}
	return 0;
}