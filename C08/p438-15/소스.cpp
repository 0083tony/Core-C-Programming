#include<stdio.h>
#include<stdlib.h> // srand(), rand() �Լ�
#include<time.h> // time() �Լ�
void sort_array(int* arr) {
	int temp;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9; j++) {
			if (arr[j] > arr[j + 1]) {
				// ��Һ񱳸� ���� ������������ ����
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main(void) {
	srand(time(NULL));// �׻� �ٸ� ����� ����
	int arr[10];

	printf("���� ��:");

	for (int i = 0; i < 10; i++) {
		// 0~99 ������ ������ arr[i]�� ����
		arr[i] = rand() % 100;
		printf("%3d", arr[i]);
	}

	sort_array(arr);

	printf("\n���� ��:");

	for (int i = 0; i < 10; i++) {
		printf("%3d", arr[i]);
	}

	return 0;
}