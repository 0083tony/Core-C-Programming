#include<stdio.h>
int main(void) {
	int arr[10]{ 23,45,62,12,99,83,23,50,72,37 };

	int max = arr[0];
	int min = arr[0];

	printf("�迭: ");
	// �迭�� ���
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	// �ּҰ��� �ִ밪�� ��Һ񱳷� ���Ѵ�
	for (int i = 0; i < 10; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	printf("\n�ִ밪: %d\n", max);
	printf("�ּҰ�: %d\n", min);

	return 0;
}