#include<stdio.h>
void fill_array(int* parr, int* num) {
	// ������ ������ �ּҿ� ���� ����
	*parr = *num;
}
int main(void) {
	int arr[20];
	int num;

	printf("�迭�� ���ҿ� ������ ��? ");
	scanf_s("%d", &num);

	printf("�迭: ");

	for (int i = 0; i < 20; i++) {
		fill_array(arr, &num);
		printf("%d ", *arr);
	}

	return 0;
}