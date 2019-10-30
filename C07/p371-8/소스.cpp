#include<stdio.h>
int main(void) {
	int arr[5];
	double price, n;

	printf("상품가 5개를 입력하세요:\n");

	// 입력받은 상품의 가격을 배열에 저장
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &arr[i]);
	}

	printf("할인율(%%)? ");
	scanf_s("%lf", &n);

	// 할인가를 연산해서 출력
	for (int i = 0; i < 5; i++) {
		price = arr[i] - (arr[i] * (0.01 * n));
		printf("가격:%8d --> 할인가:%8.0lf\n", arr[i], price);
	}
	return 0;
}