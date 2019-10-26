#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // pow() 지수 함수, sqrt() 루트 함수

struct POINT {
	double x;
	double y;
};
// KEY의 값이 0일 경우에는 정수형 좌표 나머지는 실수형 좌표
#define KEY 1

void print_point(void) {
	printf("점의 좌표? ");
}
double set_point(double* x, double* y) {
	return scanf("%lf %lf", x, y);
}
double get_length(double x1, double y1, double x2, double y2) {
	// 좌표평면 위의 두 점사이의 거리는 (xy3)^2 = (xy1)^2 + (xy2)^2
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
int main(void) {
	struct POINT P[2] = {};

#if(KEY == 0)

	for (int i = 0; i < 2; i++) {
		print_point();
		set_point(&P[i].x, &P[i].y);
	}

	printf("(%.0f,%.0f)과 (%.0f,%.0f)사이의 거리: %f", P[0].x, P[0].y, P[1].x, P[1].y, get_length(P[0].x, P[0].y, P[1].x, P[1].y));
#else

	for (int i = 0; i < 2; i++) {
		print_point();
		set_point(&P[i].x, &P[i].y);
	}

	printf("(%.2f,%.2f)과 (%.2f,%.2f)사이의 거리: %f", P[0].x, P[0].y, P[1].x, P[1].y, get_length(P[0].x, P[0].y, P[1].x, P[1].y));
#endif
	return 0;
}