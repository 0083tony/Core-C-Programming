#include<stdio.h>
int main(void) {
	int i;

	printf("�� ���� ���� ? ");
	scanf_s("%d", &i);

	// printf�� �ȿ��� ���� ����
	printf("���簢���� ����: %d\n", i * i);
	printf("���簢���� �ѷ�: %d ", i * 4);

	return 0;
}