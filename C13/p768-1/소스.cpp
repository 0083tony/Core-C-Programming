#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef unsigned char BYTE; // BYTE를 unsigned char로 정의
typedef unsigned  short WORD; // WORD를 unsigned  short로 정의
typedef unsigned long DWORD; // DWORD를 unsigned long로 정의
#define MAKEWORD(x,y) ((BYTE)x|(WORD)y<<8)// y를 왼쪽으로 8번 쉬프트 연산
#define MAKEDWORD(x,y) ((WORD)x|(DWORD)y<<16)// y를 왼쪽으로 16번 쉬프트 연산
// winsock2.h 함수에 포함된 MAKEWORD로도 간단하게 구현가능
int main(void) {
	short a, b, c, d;

	printf("low and high byte? ");
	scanf("%hi %hi", &a, &b);
	printf("WORD data: %x\n", MAKEWORD(b, a));

	printf("low and high byte? ");
	scanf("%hi %hi", &c, &d);
	printf("WORD data: %x\n", MAKEWORD(d, c));

	printf("DWORD data: %x\n", MAKEDWORD(MAKEWORD(d, c), MAKEWORD(b, a)));
	return 0;
}