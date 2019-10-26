#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // pow() 지수 함수, sqrt() 루트 함수

struct POINT {
	double x;
	double y;
};

void print_point(void);
double set_point(double* x, double* y);
double get_length(double x1, double y1, double x2, double y2);

// KEY의 값이 0일 경우에는 정수형 좌표 나머지는 실수형 좌표
#define KEY 0