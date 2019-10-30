#include<stdio.h>
int get_red(int a) {
	// 쉬프트 연산으로 Red값을 구함
	return a >> 16;
}
int get_green(int a) {
	// 쉬프트 연산으로 Green값을 구함
	a = a >> 8;
	a = a & 0xFF;
	return a;
}
int get_blue(int a) {
	a = a & 0xFF;
	return a;
}
int main(void) {
	int a;

	printf("RGB 색상? ");
	scanf_s("%x", &a);

	printf("RGB %X의 Red: %d, Greed: %d, Blue: %d", a, get_red(a), get_green(a), get_blue(a));

	return 0;
}