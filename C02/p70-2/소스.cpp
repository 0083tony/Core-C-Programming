#include <stdio.h>
int main()
{
	char name[20];
	float x;

	printf("�̸�: ");
	// #define _CRT_SECURE_NO_WARNINGS ����ϸ� _s�� ������ �ʾƵ� �ȴ�.
	scanf_s("%s", name, 20);

	printf("����: ");
	scanf_s("%f", &x);


	printf("%s�� ������ %f�Դϴ�.\n", name, x);

	return 0;
}