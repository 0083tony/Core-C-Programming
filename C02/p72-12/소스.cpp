#include<stdio.h>
int main(void)
{
	// ���ڿ� ���� �迭�� ũ�⵵ �Է�
	char x[30], y[30], z[30];

	printf("�̸�? ");
	scanf_s("%s", x, 30);

	printf("�а�? ");
	scanf_s("%s", y, 30);

	printf("�й�? ");
	scanf_s("%s", z, 30);

	printf("===================================\n");
	printf("�̸�: %s\n", x);
	printf("�а�: %s\n", y);
	printf("�й�: %s\n", z);
	printf("===================================");

	return 0;
}