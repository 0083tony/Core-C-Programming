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

	// ���̳ʽ� ������ ���� ������ ����
	r = 255 - get_red(a);
	g = 255 - get_green(a);
	b = 255 - get_blue(a);

	// or �������� rgb���� ����
	color = color | (r << 16);
	color = color | (g << 8);
	color = color | b;

	return color;
}
int main(void) {
	int a;

	printf("RGB ����? ");
	scanf_s("%x", &a);

	printf("RGB %X�� ����: %06X", a, make_rgb(a));
	return 0;
}