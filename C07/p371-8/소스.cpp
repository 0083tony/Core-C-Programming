#include<stdio.h>
int main(void) {
	int arr[5];
	double price, n;

	printf("��ǰ�� 5���� �Է��ϼ���:\n");

	// �Է¹��� ��ǰ�� ������ �迭�� ����
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &arr[i]);
	}

	printf("������(%%)? ");
	scanf_s("%lf", &n);

	// ���ΰ��� �����ؼ� ���
	for (int i = 0; i < 5; i++) {
		price = arr[i] - (arr[i] * (0.01 * n));
		printf("����:%8d --> ���ΰ�:%8.0lf\n", arr[i], price);
	}
	return 0;
}