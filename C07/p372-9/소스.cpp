#include<stdio.h>
int main(void) {
	int arr[12];
	int a;

	printf("1 ~ 12�� ���� �ڵ��� ����� �Է��ϼ���.\n");

	// �迭�� ����� ����
	for (int j = 0; j < 12; j++) {
		scanf_s("%d", &arr[j]);
	}
	// 2000���� * �Ѱ��� ��� == ��� / 2000
	for (int i = 0; i < 12; i++) {
		printf("\n%2d�� %d: ", i + 1, arr[i]);
		a = arr[i] / 2000;

		for (int l = 0; l < a; l++) {
			printf("*");
		}
	}
	return 0;
}