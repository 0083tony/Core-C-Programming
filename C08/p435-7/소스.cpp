#include<stdio.h>
void reverse_array(double* arr) {
	double* p = &arr[10];

	printf("\n역순: ");

	for (int i = 0; i < 10; i++) {
		p--;
		printf("%.1f  ", *p);
	}
}
int main(void) {
	double arr[10] = { 1.2,3.1,4.3,4.5,6.7,2.3,3.8,7.9,2.3,5.8 };

	printf("배열: ");

	for (int i = 0; i < 10; i++) {
		printf("%.1f  ", arr[i]);
	}

	// 배열을 매개변수로 함수에 전달
	reverse_array(arr);

	return 0;
}