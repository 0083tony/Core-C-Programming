#include<stdio.h>
int main(void) {
	float a;

	printf("실수? ");
	scanf_s("%f", &a);

	// %e == 지수 표기법 출력
	printf("제곱: %e\n", a * a);
	printf("세제곱: %e\n", a * a * a);

	return 0;
}