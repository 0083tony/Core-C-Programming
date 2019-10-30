#include<stdio.h>
int main(void) {
	int r, g, b;
	int color = 0;

	printf("red? ");
	scanf_s("%d", &r);
	printf("green? ");
	scanf_s("%d", &g);
	printf("blue? ");
	scanf_s("%d", &b);

	// 255보다 큰 값 == 오버플로우
	if (r > 255) {
		r = 0;
	}
	if (g > 255) {
		g = 0;
	}
	if (b > 255) {
		b = 0;
	}

	// 비트 연산 or, 쉬프트 연산 <<
	color = color | (r << 16);
	color = color | (g << 8);
	color = color | b;

	// %06X == 값이 0이어도 000000으로 출력
	printf("RGB 트루컬러: %06X", color);

	return 0;
}