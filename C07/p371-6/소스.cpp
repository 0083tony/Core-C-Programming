#include<stdio.h>
int main(void) {
	double arr[10]{ 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.1 };
	double temp[10]; // �ӽ� ���� �迭
	int count = 0;

	printf("�迭: ");
	for (int i = 0; i < 10; i++) {
		printf("%.1f  ", arr[i]);
	}
	// �������� ����
	for (int i = 9; i >= 0; i--) {
		temp[count] = arr[i];
		count++;
	}
	printf("\n����: ");
	for (int i = 0; i < 10; i++) {
		arr[i] = temp[i];
		printf("%.1f  ", arr[i]);
	}
	return 0;
}