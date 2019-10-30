#include<stdio.h>
int main(void) {
	int a, b;
	int arr[10];

	printf("첫 번째 항? ");
	scanf_s("%d", &a);
	printf("공차? ");
	scanf_s("%d", &b);

	for (int i = 0; i < 10; i++) {
		if (i != 0)
			// arr[0]을 제외 나머지는 arr[i-1]에 공차 b를 더한다.
			arr[i] = arr[i - 1] + b;
		else if (i == 0)
			// arr[0] = 첫 번째 항
			arr[i] = a;
	}

	printf("등차수열:");

	// 등차수열 출력
	for (int i = 0; i < 10; i++) {
		printf(" %d", arr[i]);
	}
	return 0;
}
