#include<stdio.h>
int main(void) {
	int a, b;
	int arr[10];

	printf("ù ��° ��? ");
	scanf_s("%d", &a);
	printf("����? ");
	scanf_s("%d", &b);

	for (int i = 0; i < 10; i++) {
		if (i != 0)
			// arr[0]�� ���� �������� arr[i-1]�� ���� b�� ���Ѵ�.
			arr[i] = arr[i - 1] + b;
		else if (i == 0)
			// arr[0] = ù ��° ��
			arr[i] = a;
	}

	printf("��������:");

	// �������� ���
	for (int i = 0; i < 10; i++) {
		printf(" %d", arr[i]);
	}
	return 0;
}
