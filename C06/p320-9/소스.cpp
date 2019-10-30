#include<stdio.h>
int get_red(int a) {
	return a >> 16;
}
int get_green(int a) {
	a = a >> 8;
	a = a & 0xFF;
	return a;
}
int get_blue(int a) {
	a = a & 0xFF;
	return a;
}
int make_rgb(int a) {
	int r, g, b;
	int color = 0;

	// 마이너스 연산을 통해 보색을 구함
	r = 255 - get_red(a);
	g = 255 - get_green(a);
	b = 255 - get_blue(a);

	// or 연산으로 rgb값을 만듬
	color = color | (r << 16);
	color = color | (g << 8);
	color = color | b;

	return color;
}
int main(void) {
	int a;

	printf("RGB 색상? ");
	scanf_s("%x", &a);

	printf("RGB %X의 보색: %06X", a, make_rgb(a));
	return 0;
}