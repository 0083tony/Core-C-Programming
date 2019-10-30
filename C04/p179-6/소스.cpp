#include<stdio.h>
int main(void) {
	float a, b, c, d;

	printf("한 점의 좌표 (x1, y1)? ");
	scanf_s("%f %f", &a, &b);
	printf("또 다른 점의 좌표 (x2, y2)? ");
	scanf_s("%f %f", &c, &d);

	printf("직선의 기울기: %f", (d - b) / (c - a));

	return 0;
}