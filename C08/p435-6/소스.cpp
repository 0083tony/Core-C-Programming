#include<stdio.h>
void get_min_max(int*);
int main(void) {
	int arr[10] = { 23,45,62,12,99,83,23,50,72,37 };

	printf("배열: ");
	// 배열의 원소를 출력
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	// 배열을 매개변수로 함수에 전달
	get_min_max(arr);

	return 0;
}
void get_min_max(int* arr) {
	// 대소비교를 하기 위해 max, min의 초기값은 arr[0]
	int max = arr[0], min = arr[0];

	// 배열의 원소를 대소비교 작으면 min 크면 max에 저장
	for (int i = 0; i < 10; i++) {
		if (min >= arr[i]) {
			min = arr[i];
		}
		if (max <= arr[i]) {
			max = arr[i];
		}
	}

	printf("\n최대값: %d\n", max);
	printf("최소값: %d\n", min);
}