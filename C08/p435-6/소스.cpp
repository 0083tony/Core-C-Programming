#include<stdio.h>
void get_min_max(int*);
int main(void) {
	int arr[10] = { 23,45,62,12,99,83,23,50,72,37 };

	printf("�迭: ");
	// �迭�� ���Ҹ� ���
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	// �迭�� �Ű������� �Լ��� ����
	get_min_max(arr);

	return 0;
}
void get_min_max(int* arr) {
	// ��Һ񱳸� �ϱ� ���� max, min�� �ʱⰪ�� arr[0]
	int max = arr[0], min = arr[0];

	// �迭�� ���Ҹ� ��Һ� ������ min ũ�� max�� ����
	for (int i = 0; i < 10; i++) {
		if (min >= arr[i]) {
			min = arr[i];
		}
		if (max <= arr[i]) {
			max = arr[i];
		}
	}

	printf("\n�ִ밪: %d\n", max);
	printf("�ּҰ�: %d\n", min);
}