#include<stdio.h>
int main(void)
{
	char ch;
	int num;

	// %c�� ���� %d�� ������ �Է�
	printf("Ŀ�� ������ S,T,G �� ����?? ");
	scanf_s("%c %d", &ch, 10, &num);

	// %c�� ���� %d�� ������ ���
	printf("%c ������ %d���� �ֹ�.", ch, num);

	return 0;
}