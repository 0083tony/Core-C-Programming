#include<stdio.h>
int main(void) {
	int a, b, c;

	printf("���� �ܼ� �ҿ� �ð� (��)? ");
	scanf_s("%d", &a);
	printf("���� �ܼ� ���� �Ÿ� (km)? ");
	scanf_s("%d", &b);

	// ��� �ӷ� c�� ����
	c = (60 / a) * b;

	// ��� �񱳸� ����� c�� 100�̻��̸� ����
	printf("��� �ӷ��� %d km/h�Դϴ�. ", c);
	if (c > 99) {
		printf("���� �ܼ� �����Դϴ�.");
	}
	else {
		printf("���� �ܼ� ������ �ƴմϴ�.");
	}

	return 0;
}