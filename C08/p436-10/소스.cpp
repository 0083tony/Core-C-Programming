#include<stdio.h>
void add_matrix(int(*arr)[3], int(*brr)[3]) {
	printf("X+Y 행렬:\n");
	// 2차원 배열의 합을 구하고 출력
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%4d", arr[i][j] + brr[i][j]);
		}
		printf("\n");
	}
}
int main(void) {
	int arr[3][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int brr[3][3] = { {9,8,7},{6,5,4},{3,2,1} };

	printf("X 행렬:\n");
	// X 2차원 배열 출력
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("Y 행렬:\n");
	// Y 2차원 배열 출력
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%3d ", brr[i][j]);
		}
		printf("\n");
	}

	// X,Y 2차원 배열을 매개변수로 전달
	add_matrix(arr, brr);

	return 0;
}