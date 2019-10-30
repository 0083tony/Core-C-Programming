#include<stdio.h>
void fill_array(int* parr, int* num) {
	// 포인터 역참조 주소에 값을 저장
	*parr = *num;
}
int main(void) {
	int arr[20];
	int num;

	printf("배열의 원소에 저장할 값? ");
	scanf_s("%d", &num);

	printf("배열: ");

	for (int i = 0; i < 20; i++) {
		fill_array(arr, &num);
		printf("%d ", *arr);
	}

	return 0;
}