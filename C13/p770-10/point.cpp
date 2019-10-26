#include "myheader.h"

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