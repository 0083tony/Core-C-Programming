#include<stdio.h>
#include<math.h> //pow()�Լ�
// PI���� ����
#define PI 3.141592

int main(void) {
	double a, b;

	printf("�������� ����? ");
	scanf_s("%lf", &a);

	// base^n �� ����ϴ� �Լ�
	b = pow(a, 3);

	printf("���� ����: %lf", 4 * PI * b / 3);

	return 0;
}