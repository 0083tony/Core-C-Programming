#include<stdio.h>
int add_to_set(int* arr, int size, int num) {
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

	for (;;) {
		printf("�迭�� �߰��� ����? ");
		scanf_s("%d", &num);

		// ���ϰ��� 1�̸� ���Ҹ� �����ϰ� ���
		if (add_to_set(arr, size, num) == 1) {

			for (int n = 0; n < size; n++) {
				// �迭�� ���� ���Ұ� �����ϸ� index�� ����ϰ� �������� ����
				if (arr[n] == arr[size]) {
					printf("�ش� ���Ұ� �̹� [%d]�� �����մϴ�.\n", n);
					size--;
				}
			}
			// �迭�� ���ҵ��� ���
			for (int j = 0; j <= size; j++) {
				printf("%d ", arr[j]);
			}

			printf("\n");
			size++;
		}
		else
			break;
	}
	return 0;
}