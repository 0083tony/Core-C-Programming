#include <stdio.h>
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


	// ������ %d�� ���
	printf("�Է��� ��¥�� %d�� %d�� %d�� �Դϴ�.", x, y, z);

	return 0;
}