#include<stdio.h>
int main(void) {
	unsigned short a = 2;

	// 쉬프트 연산으로 값을 구한다.
	printf(" 7번 비트만 1인 값: %08x %d\n", a << 6, a << 6);
	printf("15번 비트만 1인 값: %08x %d\n", a << 14, a << 14);
	printf("23번 비트만 1인 값: %08x %d\n", a << 22, a << 22);
	printf("31번 비트만 1인 값: %08x %d\n", a << 30, a << 30);

	return 0;
}