#include<stdio.h>
int main(void)
{
	char size;

	printf("�� ������(S,M,L)?");
	scanf_s("%c", &size, 2);

	printf("%c ����� �����߽��ϴ�.", size);

	return 0;
}