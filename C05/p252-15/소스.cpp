#include<stdio.h>
int main(void) {
	int a, b, c, d;
	int pay = 0;

	printf("�ð��� �޿�? ");
	scanf_s("%d", &a);
	printf("���� �ٹ� �ð�? ");
	scanf_s("%d", &b);
	printf("���� �ٹ� �ϼ�? ");
	scanf_s("%d", &c);
	printf("���� ���� ���� 0: ������, 1: 4�뺸�����(8.41%%), 2: �ҵ����(3.3%%)? ");
	scanf_s("%d", &d);

	/*
	if���� switch ��밡��
	if (d > 2) {
		printf("0,1,2 ������ �� �Ѱ����� �Է��ϼ���.");
	}
	if (d == 0) {
		pay = a * b * c;
		printf("���� ���޿�: %d\n", pay);
	}
	if (d == 1) {
		pay = a * b * c * 0.9159;
		printf("���� ���޿�: %d\n", pay);
	}
	if (d == 2) {
		pay = a * b * c * 0.967;
		printf("���� ���޿�: %d��\n", pay);
	}*/

	switch (d)
	{
	case 0:
		pay = a * b * c;
		printf("���� ���޿�: %d\n", pay);
		break;
	case 1:
		pay = a * b * c * 0.9159;
		printf("���� ���޿�: %d\n", pay);
		break;
	case 2:
		pay = a * b * c * 0.967;
		printf("���� ���޿�: %d��\n", pay);
		break;
	default:
		printf("0,1,2 ������ �� �Ѱ����� �Է��ϼ���.");
		break;
	}

	return 0;
}