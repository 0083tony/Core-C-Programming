#include<stdio.h>
#include<math.h> // sqrt(), pow()함수
double distance(int a, int b, int c, int d) {
	// sqrt() == 루트, pow() == 거듭제곱
	return sqrt(pow(c - a, 2) + pow(d - b, 2));
}
int main(void) {
	int a, b, c, d;

	printf("직선의 시작점 좌표? ");
	scanf_s("%d %d", &a, &b);
	printf("직선의 끝점 좌표? ");
	scanf_s("%d %d", &c, &d);

	printf("(%d,%d)~(%d,%d) 직선의 길이: %f", a, b, c, d, distance(a, b, c, d));

	return 0;
}