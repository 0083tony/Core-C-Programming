#include<stdio.h>
int check_date(int year, int month, int date) {
	int err = 0;

	// 윤년인지 아닌지 검사 윤년일때 2월은 29일까지
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
		// 달이 0보다 작거나 12보다 클 경우 err에 1을 더한다.
		if (month < 0 || month > 12) {
			err++;
		}
		// 8월을 제외한 짝수 달은 30일 홀수 달은 31일까지 있다.
		else if ((month % 2 == 0 && date > 30) && month != 8) {
			err++;
		}
		else if (month == 2 && date > 29) {
			err++;
		}
		else if (month % 1 == 0 && date > 31) {
			err++;
		}
	}
	else if (month < 0 || month > 12) {
		err++;
	}
	else if ((month % 2 == 0 && date > 30) && month != 8) {
		err++;
	}
	// 윤년이 아니라면 2월은 28일까지 
	else if (month == 2 && date > 28) {
		err++;
	}
	else if (month % 1 == 0 && date > 31) {
		err++;
	}
	
	return err;
}
int main(void) {
	int year, month, date;

	for (;;) {
		printf("날짜 (연 월 일)? ");
		scanf_s("%d %d %d", &year, &month, &date);

		// 리턴값 0 == 올바른 날짜, 리턴값 1 == 잘못된 날짜
		if (check_date(year, month, date) == 0) {
			printf("입력한 날짜는 %d년 %d월 %d일 입니다.\n", year, month, date);
			break;
		}
		else {
			printf("잘못 입력하셨습니다. 유효한 날짜를 입력하세요.\n");
		}
	}
	return 0;
}