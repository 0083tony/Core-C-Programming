#include<stdio.h>
int main(void) {
	int arr[10];
	int overlap = 0;

	// �Է¹��� ���ڸ� �迭�� ����
	for (int i = 0; i < 10; i++) {
		printf("�迭�� �߰��� ����? ");
		scanf_s("%d", &arr[i]);
		for (int n = 0; n < i; n++) {
			// �迭�� ���� ���ڰ� �ִ��� Ȯ��
			if (arr[n] == arr[i]) {
				printf("\n�ش� ���Ұ� �̹� [%d]�� �����մϴ�.\n", n);
				i--;
			}
		}
		// ������� �Էµ� �迭�� ���� ���
		for (int j = 0; j <= i; j++) {
			printf("%4d", arr[j]);
		}
		printf("\n");
	}
	return 0;
}