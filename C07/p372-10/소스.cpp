#include<stdio.h>
int main(void) {
	int arr[3][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int brr[3][3] = { {9,8,7},{6,5,4},{3,2,1} };

	printf("X 행렬:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("Y 행렬:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%3d ", brr[i][j]);
		}
		printf("\n");
	}
	printf("X + Y 행렬:\n");

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%3d ", arr[i][j] + brr[i][j]);
		}
		printf("\n");
	}
	return 0;
}