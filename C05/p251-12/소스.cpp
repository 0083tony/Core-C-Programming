#include<stdio.h>
int main(void) {
	double a, b, c;

	printf("����? ");
	scanf_s("%lf", &a);
	printf("������(%%)? ");
	scanf_s("%lf", &b);

	// for���� ����� 10�� �ݺ�
	for (int i = 0; i < 10; ++i) {
		
		// ���� c�� ���
		c = a * (b * 0.01);
		
		// �����հ� a�� ���
		a = a + c;
		printf("%2d��° ����: %.2lf, �����հ�: %.2lf\n", i + 1, c, a);
	}

	return 0;
}