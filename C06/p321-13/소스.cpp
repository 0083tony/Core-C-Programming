#include<stdio.h>
int is_leap_year(int year) {
	// 윤년인지 검사하는 함수
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
		return year;
	}
	return 0;
}
int get_days_of_month(int year, int i) {
	// 해당 년도 달의 날짜수를 리턴하는 함수
	if (i != 2 && i != 8 && i / 2 == 0) {
		return 31;
	}
	else if (i == 2) {
		if (is_leap_year(year) != 0) {
			return 29;
		}
		else return 28;
	}
	else return 30;
	
}
int main(void) {
	int year;

	printf("연도? ");
	scanf_s("%d", &year);

	printf("[ %d년 ]\n", year);

	for (int i = 1; i < 13; i++) {
		printf("%2d월:%d일 ", i, get_days_of_month(year, i));
		if (i == 6) {
			printf("\n");
		}
	}
	return 0;
}