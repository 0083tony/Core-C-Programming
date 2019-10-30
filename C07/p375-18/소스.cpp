#include<stdio.h>
int main(void) {
	int arr[10];
	int overlap = 0;

	// 입력받은 숫자를 배열에 저장
	for (int i = 0; i < 10; i++) {
		printf("배열에 추가할 원소? ");
		scanf_s("%d", &arr[i]);
		for (int n = 0; n < i; n++) {
			// 배열에 같은 숫자가 있는지 확인
			if (arr[n] == arr[i]) {
				printf("\n해당 원소가 이미 [%d]에 존재합니다.\n", n);
				i--;
			}
		}
		// 현재까지 입력된 배열의 수를 출력
		for (int j = 0; j <= i; j++) {
			printf("%4d", arr[j]);
		}
		printf("\n");
	}
	return 0;
}