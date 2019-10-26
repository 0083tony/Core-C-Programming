typedef unsigned char BYTE;
#define _CRT_SECURE_NO_WARNINGS
// ����Ʈ �������� RGB�� ����
#define GET_RED(color) (BYTE)((color)>>16)
#define GET_GREEN(color) (BYTE)((color)>>8)
#define GET_BLUE(color) (BYTE)(color)
// r,g,b���� ������ �Է¹޾� ��Ʈ �������� RGB�� ����
#define MAKE_RGB(r,g,b) ((BYTE)(r) << 16) | ((BYTE)(g) << 8) | (BYTE)(b)
#include <stdio.h>
int main(void) {
	int color;
	int r, g, b;

	printf("RGB ����(0x123456���� �Է�)? ");
	scanf("%i", &color);

	// 255�� r,g,b���� ���� ������ ���Ѵ�.
	r = 255 - GET_RED(color);
	g = 255 - GET_GREEN(color);
	b = 255 - GET_BLUE(color);

	// %06X�� ����� Red�� ������ 00 �̶� ����� ������ �Ѵ�.
	printf("RGB %X�� ����: %06X", color, MAKE_RGB(r,g,b));
}