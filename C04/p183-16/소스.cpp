#include<stdio.h>
int main(void) {
	int r, g, b;
	int color = 0;

	printf("red? ");
	scanf_s("%d", &r);
	printf("green? ");
	scanf_s("%d", &g);
	printf("blue? ");
	scanf_s("%d", &b);

	// 255���� ū �� == �����÷ο�
	if (r > 255) {
		r = 0;
	}
	if (g > 255) {
		g = 0;
	}
	if (b > 255) {
		b = 0;
	}

	// ��Ʈ ���� or, ����Ʈ ���� <<
	color = color | (r << 16);
	color = color | (g << 8);
	color = color | b;

	// %06X == ���� 0�̾ 000000���� ���
	printf("RGB Ʈ���÷�: %06X", color);

	return 0;
}