#include<stdio.h>
int add_to_multiset(int* arr, int size, int num) {
	// �迭�� ũ�� 10���� �Է��� Ƚ���� ������ num�� �迭�� ����
	if (size < 10) {
		arr[size] = num;
		return 1;
	}
	else return 0;
}
int main(void) {
	int arr[10];
	int num, size = 0;

	// ���ѷ���
	for (;;) {
		printf("�迭�� �߰��� ����? ");
		scanf_s("%d", &num);

		// ���ϰ��� 1�̸� ���Ҹ� �����ϰ� ���
		if (add_to_multiset(arr, size, num) == 1) {

			for (int i = 0; i <= size; i++) {
				printf("%d ", arr[i]);
			}
			size++;
			printf("\n");
		}// ���ϰ��� 1�� �ƴϸ� ����
		else
			break;
	}
	return 0;
}