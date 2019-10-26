#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // pow() ���� �Լ�, sqrt() ��Ʈ �Լ�

struct POINT {
	double x;
	double y;
};
// KEY�� ���� 0�� ��쿡�� ������ ��ǥ �������� �Ǽ��� ��ǥ
#define KEY 1

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
int main(void) {
	struct POINT P[2] = {};

#if(KEY == 0)

	for (int i = 0; i < 2; i++) {
		print_point();
		set_point(&P[i].x, &P[i].y);
	}

	printf("(%.0f,%.0f)�� (%.0f,%.0f)������ �Ÿ�: %f", P[0].x, P[0].y, P[1].x, P[1].y, get_length(P[0].x, P[0].y, P[1].x, P[1].y));
#else

	for (int i = 0; i < 2; i++) {
		print_point();
		set_point(&P[i].x, &P[i].y);
	}

	printf("(%.2f,%.2f)�� (%.2f,%.2f)������ �Ÿ�: %f", P[0].x, P[0].y, P[1].x, P[1].y, get_length(P[0].x, P[0].y, P[1].x, P[1].y));
#endif
	return 0;
}