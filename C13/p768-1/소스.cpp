#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef unsigned char BYTE; // BYTE�� unsigned char�� ����
typedef unsigned  short WORD; // WORD�� unsigned  short�� ����
typedef unsigned long DWORD; // DWORD�� unsigned long�� ����
#define MAKEWORD(x,y) ((BYTE)x|(WORD)y<<8)// y�� �������� 8�� ����Ʈ ����
#define MAKEDWORD(x,y) ((WORD)x|(DWORD)y<<16)// y�� �������� 16�� ����Ʈ ����
// winsock2.h �Լ��� ���Ե� MAKEWORD�ε� �����ϰ� ��������
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