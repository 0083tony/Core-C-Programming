#include<stdio.h>
int main(void)
{
	float x;

	// �Ǽ��� %f�� �Է� �޴´�.
	printf("������? ");
	scanf_s("%f", &x);

	// %.2f == �Ҽ��� ��° �ڸ����� �ݿø�
	printf("�Է��� �����Դ� %.2fKG�Դϴ�.", x);

	return 0;
}