#include<stdio.h>
int main(void) {
	int x, y;

	printf("���� ��ǥ (x, y)? ");
	scanf_s("%d %d", &x, &y);

	// ��� �񱳸� ���� �� ��и� ���� ������ ���
	if (x > 0 && y > 0) {
		printf("1��и鿡 �ֽ��ϴ�.");
	}
	if (x < 0 && y > 0) {
		printf("2��и鿡 �ֽ��ϴ�.");
	}
	if (x < 0 && y < 0) {
		printf("3��и鿡 �ֽ��ϴ�.");
	}
	if (x > 0 && y < 0) {
		printf("4��и鿡 �ֽ��ϴ�.");
	}

	return 0;
}