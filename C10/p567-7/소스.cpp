#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
struct DATE {
	int year;
	int month;
	int date;
};
struct DATE set_as_today(void) {
	time_t t = time(NULL);
	struct tm* today = localtime(&t);
	struct DATE ti;
	ti.year = today->tm_year + 1900;
	ti.month = today->tm_mon + 1;
	ti.date = today->tm_mday;
	return ti;
}
void printf_date_eng(struct DATE ti) {
	char month[12][5]{
		"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sept","Oct","Nov","Dec"
	};
	for (size_t i = 0; i < 12; i++) {
		if (ti.month == i + 1) {
			printf("Today is %s %d %d\n", month[i], ti.date, ti.year);
		}
	}
}
int main(void) {
	struct DATE ti;

	ti = set_as_today();
	printf_date_eng(ti);

	return 0;
}