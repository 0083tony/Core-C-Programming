#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // pow() ���� �Լ�, sqrt() ��Ʈ �Լ�

struct POINT {
	double x;
	double y;
};

void print_point(void);
double set_point(double* x, double* y);
double get_length(double x1, double y1, double x2, double y2);

// KEY�� ���� 0�� ��쿡�� ������ ��ǥ �������� �Ǽ��� ��ǥ
#define KEY 0