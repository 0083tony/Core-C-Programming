typedef unsigned char BYTE;
#define _CRT_SECURE_NO_WARNINGS
// ����Ʈ �������� RGB�� ����
#define GET_RED(color) (BYTE)((color)>>16)
#define GET_GREEN(color) (BYTE)((color)>>8)
#define GET_BLUE(color) (BYTE)(color)
#include <stdio.h>
int main(void) {
	int color;

	printf("RGB ����(0x123456���� �Է�)? ");
	scanf("%i", &color);
	printf("RGB %X�� Red: %d, Green: %d, Blue: %d\n", color, GET_RED(color), GET_GREEN(color), GET_BLUE(color));
}