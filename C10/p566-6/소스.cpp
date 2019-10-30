#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct DATE {
	int year;
	int month;
	int date;
};
void is_same_date(struct DATE hld, struct DATE input) {
	if ((hld.year == input.year) && (hld.month == input.month) && (hld.date == input.date)) {
		printf("%d/%d/%d은 공휴일 입니다.\n", input.year, input.month, input.date);
	}
	else printf("%d/%d/%d은 공휴일이 아닙니다.\n", input.year, input.month, input.date);
}
int main(void) {
	struct DATE hld = { 2019,1,1 };
	struct DATE input;

	for (;;) {
		printf("날짜(연 월 일)? ");
		scanf("%d %d %d", &input.year, &input.month, &input.date);

		if ((input.year == 0) && (input.month == 0) && (input.date == 0)) {
			break;
		}
		is_same_date(hld, input);
	}
	return 0;
}