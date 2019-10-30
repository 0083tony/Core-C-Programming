#include<stdio.h>
int add_to_multiset(int* arr, int size, int num) {
	// 배열의 크기 10보다 입력한 횟수가 작으면 num을 배열에 저장
	if (size < 10) {
		arr[size] = num;
		return 1;
	}
	else return 0;
}
int main(void) {
	int arr[10];
	int num, size = 0;

	// 무한루프
	for (;;) {
		printf("배열에 추가할 원소? ");
		scanf_s("%d", &num);

		// 리턴값이 1이면 원소를 저장하고 출력
		if (add_to_multiset(arr, size, num) == 1) {

			for (int i = 0; i <= size; i++) {
				printf("%d ", arr[i]);
			}
			size++;
			printf("\n");
		}// 리턴값이 1이 아니면 종료
		else
			break;
	}
	return 0;
}