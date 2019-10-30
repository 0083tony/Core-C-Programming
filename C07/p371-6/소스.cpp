#include<stdio.h>
int main(void) {
	double arr[10]{ 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.1 };
	double temp[10]; // 임시 저장 배열
	int count = 0;

	printf("배열: ");
	for (int i = 0; i < 10; i++) {
		printf("%.1f  ", arr[i]);
	}
	// 역순으로 정렬
	for (int i = 9; i >= 0; i--) {
		temp[count] = arr[i];
		count++;
	}
	printf("\n역순: ");
	for (int i = 0; i < 10; i++) {
		arr[i] = temp[i];
		printf("%.1f  ", arr[i]);
	}
	return 0;
}