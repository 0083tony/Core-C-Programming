#include<stdio.h>
int main(void) {
	int arr[10]{ 23,45,62,12,99,83,23,50,72,37 };
	int i, max, min;
	int max_index, min_index;

	max = arr[0];
	min = arr[0];

	printf("배열: ");
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	// 최소값과 최대값은 대소비교로 구하고 최대값과 최소값의 index i를 저장 
	for (i = 0; i < 10; i++) {
		if (arr[i] > max) {
			max = arr[i];
			max_index = i;
		}
		if (arr[i] < min) {
			min = arr[i];
			min_index = i;
		}
	}
	printf("\n최대값: 인덱스= %d 값= %d\n", max_index, max);
	printf("최소값: 인덱스= %d 값= %d\n", min_index, min);

	return 0;
}