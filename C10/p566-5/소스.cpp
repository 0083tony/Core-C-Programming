#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>// time()�Լ�
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
void printf_date(struct DATE ti) {
	printf("������ ��¥�� %d / %d / %d �Դϴ�.\n", ti.year, ti.month, ti.date);
}
int main(void) {
	struct DATE ti;

	ti = set_as_today();
	printf_date(ti);

	return 0;
}