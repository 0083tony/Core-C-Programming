#include<stdio.h>
#include<math.h> // sqrt()�Լ�
int main(void) {
	double a, b;

	printf("�׺�? ");
	scanf_s("%lf", &a);
	printf("����? ");
	scanf_s("%lf", &b);

	// sqrt() == ��Ʈ ����
	printf("������ ����: %lf", sqrt(a * a + b * b));

	return 0;
}