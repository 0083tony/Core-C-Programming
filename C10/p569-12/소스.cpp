#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
union mydata {
	short low;
	short high;
	int dword = 0;
};
int make_dword(short low, short high) {
	union mydata a;

	a.dword = high << 16;
	a.dword = a.dword + low;

	return a.dword;
}
int main(void) {
	short low;
	short high;

	printf("low word? ");
	scanf("%hi", &low);
	printf("high word? ");
	scanf("%hi", &high);

	printf("dword data: %x\n", make_dword(low, high));

	return 0;
}