#include<stdio.h>
int find_array(int* arr, int key) {
	for (int i = 0; i < 10; i++) {
		if (arr[i] == key) {
			// 배열은 0번부터 시작하므로 +1
			return i + 1;
		}
	}
	return -1;
}
int main(void) {
	int arr[10] = { 23,45,62,12,99,83,23,50,72,37 };
	int key;

	for (int i = 0; i < 10; i++) {
		printf("%4d", arr[i]);
	}
	printf("\n찾을 값? ");
	scanf_s("%d", &key);

	printf("%d는 %d번째 원소입니다.\n", key, find_array(arr, key));
	
	return 0;
}