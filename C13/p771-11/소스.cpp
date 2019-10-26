#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h> //time()함수 

// 1 == yes || 0 == no
#define USE_USA_FORMAT 1

// 1 == set_as_today || 0 == is_same_date
#define TODAY_OR_SAME_DAY 1

struct DATE {
	int year;
	int month;
	int date;
};

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

int main(void) {
	struct DATE hld[2] = { 2019,1,1 }; // 공휴일 설정
	struct DATE input;
	struct DATE ti;

	// TODAY_OR_SAME_DAY == 1 일때 오늘 날짜를 출력 USE_USA_FORMAT == 1 이면 달을 영문, 0 일때는 숫자
#if(TODAY_OR_SAME_DAY == 1)
	ti = set_as_today();

#if(USE_USA_FORMAT == 1)
	printf("Today is ");
	printf_date_USA(ti);
#else
	printf("오늘은 %d/%d/%d 입니다.\n", ti.year, ti.month, ti.date);
#endif
#endif

	// TODAY_OR_SAME_DAY == 0 일때 날짜를 입력받아 비교 USE_USA_FORMAT == 1 이면 달을 영문, 0 일때는 숫자
#if(TODAY_OR_SAME_DAY == 0)
	for (;;) {
		printf("날짜(연 월 일)? ");
		scanf("%d %d %d", &input.year, &input.month, &input.date);
		if ((input.year == 0) && (input.month == 0) && (input.date == 0)) {
			break;
		}
		is_same_date(*hld, input);
	}
#endif
}