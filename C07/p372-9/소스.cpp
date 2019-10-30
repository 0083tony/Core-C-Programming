#include<stdio.h>
int main(void) {
	int arr[12];
	int a;

	printf("1 ~ 12월 까지 핸드폰 요금을 입력하세요.\n");

	// 배열에 요금을 저장
	for (int j = 0; j < 12; j++) {
		scanf_s("%d", &arr[j]);
	}
	// 2000원당 * 한개로 출력 == 요금 / 2000
	for (int i = 0; i < 12; i++) {
		printf("\n%2d월 %d: ", i + 1, arr[i]);
		a = arr[i] / 2000;

		for (int l = 0; l < a; l++) {
			printf("*");
		}
	}
	return 0;
}