#include<stdio.h>
int main(void) {
	float a, b;

	printf("��(N)? ");
	scanf_s("%f", &a);
	printf("����(m)? ");
	scanf_s("%f", &b);

	// printf�� �ȿ��� ���� ����, %.2f == �Ҽ��� ��° �ڸ����� �ݿø�
	printf("���� ��: %.2f J", a * b);

	return 0;
}