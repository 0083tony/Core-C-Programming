#include "myheader.h"

// 오늘의 날짜를 구하는 함수
struct DATE set_as_today(void) {
	time_t t = time(NULL);
	struct tm* today = localtime(&t);
	struct DATE ti;
	ti.year = today->tm_year + 1900;
	ti.month = today->tm_mon + 1;
	ti.date = today->tm_mday;
	return ti;
}

// 달을 영문으로 출력하는 함수
void printf_date_USA(struct DATE ti) {
	char month[12][5]{
		"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sept","Oct","Nov","Dec"
	};
	for (size_t i = 0; i < 12; i++) {
		if (ti.month == i + 1) {
			printf("%s %d %d", month[i], ti.date, ti.year);
		}
	}
}

// 입력받은 날짜와 저장 되어있는 날짜를 비교하는 함수
void is_same_date(struct DATE hld, struct DATE input) {
	// USE_USA_FORMAT == 0 이면 숫자로 년 월 달 출력
#if(USE_USA_FORMAT == 0)
	if ((hld.year == input.year) && (hld.month == input.month) && (hld.date == input.date)) {
		printf("%d/%d/%d은 공휴일 입니다.\n", input.year, input.month, input.date);
	}
	else printf("%d/%d/%d은 공휴일이 아닙니다.\n", input.year, input.month, input.date);
#endif
	// USE_USA_FORMAT == 1 이면 달을 영문으로 출력
# if(USE_USA_FORMAT == 1)
	if ((hld.year == input.year) && (hld.month == input.month) && (hld.date == input.date)) {
		printf_date_USA(input);
		printf("은 공휴일 입니다.\n");
	}
	else {
		printf_date_USA(input);
		printf("은 공휴일이 아닙니다.\n");
	}
#endif
}