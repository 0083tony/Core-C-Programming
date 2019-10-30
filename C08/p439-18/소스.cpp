#include<stdio.h>
int add_to_set(int* arr, int size, int num) {
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

	for (;;) {
		printf("배열에 추가할 원소? ");
		scanf_s("%d", &num);

		// 리턴값이 1이면 원소를 저장하고 출력
		if (add_to_set(arr, size, num) == 1) {

			for (int n = 0; n < size; n++) {
				// 배열에 같은 원소가 존재하면 index를 출력하고 저장하지 않음
				if (arr[n] == arr[size]) {
					printf("해당 원소가 이미 [%d]에 존재합니다.\n", n);
					size--;
				}
			}
			// 배열의 원소들을 출력
			for (int j = 0; j <= size; j++) {
				printf("%d ", arr[j]);
			}

			printf("\n");
			size++;
		}
		else
			break;
	}
	return 0;
}