#include<stdio.h>
int main(void)
{
	int x;

	printf("16���� ����? ");
	// %x�� 16������ �Է¹޴´�.
	scanf_s("%x", &x);

	// %x�� 16������ ����Ѵ�.
	// 16������ %x %X �ΰ��� ������� ��� ����
	// ex) %x == ff12, %X == FF12
	printf("16���� %x�� 10������ %d�Դϴ�.", x, x);

	return 0;
}