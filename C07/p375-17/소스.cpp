#include<stdio.h>
int main(void) {
	int arr[10];

	// �Է¹��� ���ڸ� �迭�� ����
	for (int i = 0; i < 10; i++) {
		printf("�迭�� �߰��� ����? ");
		scanf_s("%d", &arr[i]);
		// ������� �Էµ� �迭�� ���� ���
		for (int j = 0; j <= i; j++) {
			printf("%4d", arr[j]);
		}
		printf("\n");
	}
	return 0;
}
