#include<stdio.h>
int main(void) {
	float a;

	printf("�Ǽ�? ");
	scanf_s("%f", &a);

	// %e == ���� ǥ��� ���
	printf("����: %e\n", a * a);
	printf("������: %e\n", a * a * a);

	return 0;
}