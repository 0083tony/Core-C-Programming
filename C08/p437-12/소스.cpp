#include<stdio.h>
int find_all_in_array(int* arr, int size, int key) {
	int count = 0; 

	// key값과 동일한 배열원소 발견시 index를 arr에 저장 후 count++
	for (int i = 0; i < size; i++) {
		if (arr[i] == key) {
			arr[count] = i;
			count++;
		}
	}
	return count;	
}
int main(void) {
	int arr[10] = { 12,45,62,12,99,83,23,12,72,37 };
	int key, index;
	int size = 10; // 배열의 크기

	for (int i = 0; i < 10; i++) {
		printf("%3.d", arr[i]);
	}

	printf("\n찾을 값? ");
	scanf_s("%d", &key);

	// 배열, 배열의 크기, key값을 매개변수로 전달
	index = find_all_in_array(arr, size, key);

	printf("찾은 항목은 모두 %d개입니다.\n", index);
	printf("찾은 항목의 인덱스: ");

	// 항목의 인덱스 출력
	for (int i = 0; i < index; i++) {
		printf("%3d", arr[i]);
	}

	return 0;
}