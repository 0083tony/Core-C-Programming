#include<stdio.h>
int main(void) {
	int left, top, right, bottom;
	int x, y;

	printf("���� ������ �»���� (left, top)? ");
	scanf_s("%d %d", &left, &top);
	printf("���� ������ ���ϴ��� (right, botton)? ");
	scanf_s("%d %d", &right, &bottom);

	printf("���� ��ǥ (x, y)");
	scanf_s("%d %d", &x, &y);

	// ��Һ񱳸� ���� ���� ���� ������ �ƴ��� Ȯ��
	if (left <= x && x <= right && top <= y && y <= bottom) {
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�.");
	}
	else {
		printf("���簢�� ����� ���� ���� ���� �ƴմϴ�.");
	}

	return 0;
}