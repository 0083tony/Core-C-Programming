#include<stdio.h>
int main(void) {
	int arr[10]{ 23,45,62,12,99,83,23,50,12,37 };
	int num;

	printf("�迭: ");

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\nã�� ��? ");
	scanf_s("%d", &num);

	for (int i = 9; i >= 0; --i) {
		// �迭�� ����� ���� �������� n�� ��
		if (arr[i] == num) {
			// arr[]�� 0���� ���� ����ǹǷ� i+1��°�� ����� ��
			printf("%d �� %d��° �����Դϴ�.", arr[i], i + 1);
			// �ߺ� ��� ������ ���� ���Ҹ� ã���� ���α׷� ����
			return 0;
		}
	}
}