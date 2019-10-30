#include<stdio.h>
#include<stdlib.h> // srand(), rand() 함수
#include<time.h> // time() 함수
void sort_array(int* arr) {
	int temp;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9; j++) {
			if (arr[j] > arr[j + 1]) {
				// 대소비교를 통해 오름차순으로 정렬
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main(void) {
	srand(time(NULL));// 항상 다른 결과를 얻음
	int arr[10];

	printf("정렬 전:");

	for (int i = 0; i < 10; i++) {
		// 0~99 사이의 난수를 arr[i]에 저장
		arr[i] = rand() % 100;
		printf("%3d", arr[i]);
	}

	sort_array(arr);

	printf("\n정렬 후:");

	for (int i = 0; i < 10; i++) {
		printf("%3d", arr[i]);
	}

	return 0;
}