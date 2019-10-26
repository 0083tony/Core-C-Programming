typedef unsigned char BYTE;
#define _CRT_SECURE_NO_WARNINGS
// 쉬프트 연산으로 RGB값 추출
#define GET_RED(color) (BYTE)((color)>>16)
#define GET_GREEN(color) (BYTE)((color)>>8)
#define GET_BLUE(color) (BYTE)(color)
#include <stdio.h>
int main(void) {
	int color;

	printf("RGB 색상(0x123456으로 입력)? ");
	scanf("%i", &color);
	printf("RGB %X의 Red: %d, Green: %d, Blue: %d\n", color, GET_RED(color), GET_GREEN(color), GET_BLUE(color));
}