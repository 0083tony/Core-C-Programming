#include<stdio.h>
int main(void) {
	float a, b;

	printf("제품의 가격? ");
	scanf_s("%f", &a);
	printf("할인율(%%)? ");
	scanf_s("%f", &b);

	/*제어문 사용
	if (b > 100 || b < 0) {
		printf("할인율은 0보다 작거나 100보다 클 수 없다.");
		return 0;
	}
	if (a < 0) {
		printf("물건의 값은 0보다 작을 수 없다.");
		return 0;
	}*/
	printf("할인가: %.0f원 (%.0f원 할인)", a - a * (b / 100), a * (b / 100));

	return 0;
}