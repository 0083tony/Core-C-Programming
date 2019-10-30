#include<stdio.h>
int main(void) {
	int year;

	printf("연도? ");
	scanf_s("%d", &year);

	// 입력받은 연도를 400으로 나누었을때 나머지가 0 이면 윤년
	if (year % 400 == 0) {
		printf("%d년은 윤년입니다.", year);
	}
	// 입력받은 연도를 4로 나누었을때 나머지가 0이고 100으로 나누었을때 나머지가 0이 아니면 윤년
	if (year % 4 == 0 && year % 100 != 0) {
		printf("%d년은 윤년입니다.", year);
	}
	else {
		printf("%d년은 윤년이 아닙니다.", year);
	}

	return 0;
}