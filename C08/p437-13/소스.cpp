#include<stdio.h>
void swap_array(int* arr, int* brr) {
	int temp[10];

	// temp에 임시로 arr를 저장
	for (int i = 0; i < 10; i++) {
		temp[i] = arr[i];
	}

	// a배열에 b배열을 저장하고, temp에 저장된 a배열을 b배열로 저장
	for (int i = 0; i < 10; i++) {
		arr[i] = brr[i];
		brr[i] = temp[i];
	}
}
int main(void) {
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int brr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };

	printf("a:");
	// a배열의 원소 출력
	for (int i = 0; i < 10; i++) {
		printf("%3d", arr[i]);
	}

	printf("\nb:");
	// b배열의 원소 출력
	for (int i = 0; i < 10; i++) {
		printf("%3d", brr[i]);
	}

	printf("\n<< swap_array 호출 후 >>\n");

	// a,b 배열을 매개변수로 전달
	swap_array(arr, brr);

	printf("a:");
	// a배열의 원소 출력
	for (int i = 0; i < 10; i++) {
		printf("%3d", arr[i]);
	}

	printf("\nb:");
	// b배열의 원소 출력
	for (int i = 0; i < 10; i++) {
		printf("%3d", brr[i]);
	}

	return 0;
}