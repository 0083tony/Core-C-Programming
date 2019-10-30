#include<stdio.h>
#include<math.h> // sqrt()함수
int main(void) {
	int a, b, c, d;
	int x, y;

	printf("직선의 시작점 (x1, y1)? ");
	scanf_s("%d %d", &a, &b);
	printf("직선의 끝점 (x2, y2)? ");
	scanf_s("%d %d", &c, &d);

	x = a - c;
	y = b - d;

	// sqrt() == 루트 연산
	printf("직선의 길이: %f", sqrt((x * x) + (y * y)));

	return 0;
}