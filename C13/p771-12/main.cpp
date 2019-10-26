#include "myheader.h"

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