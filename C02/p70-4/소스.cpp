#include<stdio.h>
int main(void)
{
	int x, y, z;

	// ������ %d�� �Է� ����
	printf("��? ");
	scanf_s("%d", &x);

	printf("��? ");
	scanf_s("%d", &y);

	printf("��? ");
	scanf_s("%d", &z);

	// %02d == ���ڸ� ���ڶ�� 0�� ���� ����� ���ڸ��� ǥ��
	printf("�Է��� �ð��� %02d:%02d:%02d", x, y, z);

	return 0;
}