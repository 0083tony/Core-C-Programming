#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void fill_array_2D(int(*arr)[5], int* num) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			arr[i][j] = *num;
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main(void) {
	int arr[4][5];
	int num;

	printf("�迭�� ���ҿ� ������ ��? ");
	scanf("%d", &num);

	// 2���� �迭�� num�� �Ű������� ����
	fill_array_2D(arr, &num);

	return 0;
}