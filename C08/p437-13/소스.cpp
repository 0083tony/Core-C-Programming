#include<stdio.h>
void swap_array(int* arr, int* brr) {
	int temp[10];

	// temp�� �ӽ÷� arr�� ����
	for (int i = 0; i < 10; i++) {
		temp[i] = arr[i];
	}

	// a�迭�� b�迭�� �����ϰ�, temp�� ����� a�迭�� b�迭�� ����
	for (int i = 0; i < 10; i++) {
		arr[i] = brr[i];
		brr[i] = temp[i];
	}
}
int main(void) {
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int brr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };

	printf("a:");
	// a�迭�� ���� ���
	for (int i = 0; i < 10; i++) {
		printf("%3d", arr[i]);
	}

	printf("\nb:");
	// b�迭�� ���� ���
	for (int i = 0; i < 10; i++) {
		printf("%3d", brr[i]);
	}

	printf("\n<< swap_array ȣ�� �� >>\n");

	// a,b �迭�� �Ű������� ����
	swap_array(arr, brr);

	printf("a:");
	// a�迭�� ���� ���
	for (int i = 0; i < 10; i++) {
		printf("%3d", arr[i]);
	}

	printf("\nb:");
	// b�迭�� ���� ���
	for (int i = 0; i < 10; i++) {
		printf("%3d", brr[i]);
	}

	return 0;
}