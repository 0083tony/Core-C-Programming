#include<stdio.h>
int main(void) {
	double a, b;
	double arr[10];

	printf("ù ��° ��? ");
	scanf_s("%lf", &a);
	printf("����? ");
	scanf_s("%lf", &b);

	for (int i = 0; i < 10; i++) {
		if (i != 0)
			// arr[0]�� ���� �������� arr[i-1]�� ���� b�� ���Ѵ�.
			arr[i] = arr[i - 1] * b;
		else if (i == 0)
			// arr[0] = ù ��° ��
			arr[i] = a;
	}

	printf("��������:");

	// �������� ���
	for (int i = 0; i < 10; i++) {
		if (i == 0)printf("%.1f ", arr[i]);
		else if (i == 9)printf("%e ", arr[i]);
		else printf("%.0f ", arr[i]);
	}
	return 0;
}