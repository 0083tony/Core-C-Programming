#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h> //time()ÇÔ¼ö 

// 1 == yes || 0 == no
#define USE_USA_FORMAT 0

// 1 == set_as_today || 0 == is_same_date
#define TODAY_OR_SAME_DAY 0

struct DATE {
	int year;
	int month;
	int date;
};

struct DATE set_as_today(void);
void printf_date_USA(struct DATE);
void is_same_date(struct DATE, struct DATE);
