#include<stdio.h>
int zero_array(int *arr) {
	return *arr = 0;
}
int main(void) {
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };

	for (int i = 0; i < 10; i++) {
		zero_array(&arr[i]);
		printf("%3d", arr[i]);
	}
	return 0;
}