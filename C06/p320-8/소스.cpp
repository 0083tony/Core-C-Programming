#include<stdio.h>
int get_red(int a) {
	// ����Ʈ �������� Red���� ����
	return a >> 16;
}
int get_green(int a) {
	// ����Ʈ �������� Green���� ����
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

	printf("RGB ����? ");
	scanf_s("%x", &a);

	printf("RGB %X�� Red: %d, Greed: %d, Blue: %d", a, get_red(a), get_green(a), get_blue(a));

	return 0;
}