typedef unsigned char BYTE;
#define _CRT_SECURE_NO_WARNINGS
// 쉬프트 연산으로 RGB값 추출
#define GET_RED(color) (BYTE)((color)>>16)
#define GET_GREEN(color) (BYTE)((color)>>8)
#define GET_BLUE(color) (BYTE)(color)
// r,g,b값의 보색을 입력받아 비트 연산으로 RGB값 생성
#define MAKE_RGB(r,g,b) ((BYTE)(r) << 16) | ((BYTE)(g) << 8) | (BYTE)(b)
#include <stdio.h>
int main(void) {
	int color;
	int r, g, b;

	printf("RGB 색상(0x123456으로 입력)? ");
	scanf("%i", &color);

	// 255에 r,g,b값을 빼서 보색을 구한다.
	r = 255 - GET_RED(color);
	g = 255 - GET_GREEN(color);
	b = 255 - GET_BLUE(color);

	// %06X를 사용해 Red의 보색이 00 이라도 출력이 나오게 한다.
	printf("RGB %X의 보색: %06X", color, MAKE_RGB(r,g,b));
}