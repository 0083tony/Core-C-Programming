#include<stdio.h>
int main(void) {
	int arr[10]{ 23,45,62,12,99,83,23,50,72,37 };
	int i, max, min;
	int max_index, min_index;

	max = arr[0];
	min = arr[0];

	printf("�迭: ");
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	// �ּҰ��� �ִ밪�� ��Һ񱳷� ���ϰ� �ִ밪�� �ּҰ��� index i�� ���� 
	for (i = 0; i < 10; i++) {
		if (arr[i] > max) {
			max = arr[i];
			max_index = i;
		}
		if (arr[i] < min) {
			min = arr[i];
			min_index = i;
		}
	}
	printf("\n�ִ밪: �ε���= %d ��= %d\n", max_index, max);
	printf("�ּҰ�: �ε���= %d ��= %d\n", min_index, min);

	return 0;
}