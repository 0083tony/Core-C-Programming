#include "myheader.h"

void print_point(void) {
	printf("���� ��ǥ? ");
}
double set_point(double* x, double* y) {
	return scanf("%lf %lf", x, y);
}
double get_length(double x1, double y1, double x2, double y2) {
	// ��ǥ��� ���� �� �������� �Ÿ��� (xy3)^2 = (xy1)^2 + (xy2)^2
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}