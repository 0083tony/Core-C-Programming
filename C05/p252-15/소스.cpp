#include<stdio.h>
int main(void) {
	int a, b, c, d;
	int pay = 0;

	printf("시간당 급여? ");
	scanf_s("%d", &a);
	printf("일일 근무 시간? ");
	scanf_s("%d", &b);
	printf("일일 근무 일수? ");
	scanf_s("%d", &c);
	printf("세금 적용 여부 0: 미적용, 1: 4대보험공제(8.41%%), 2: 소득공제(3.3%%)? ");
	scanf_s("%d", &d);

	/*
	if문과 switch 사용가능
	if (d > 2) {
		printf("0,1,2 세가지 중 한가지를 입력하세요.");
	}
	if (d == 0) {
		pay = a * b * c;
		printf("예상 월급여: %d\n", pay);
	}
	if (d == 1) {
		pay = a * b * c * 0.9159;
		printf("예상 월급여: %d\n", pay);
	}
	if (d == 2) {
		pay = a * b * c * 0.967;
		printf("예상 월급여: %d원\n", pay);
	}*/

	switch (d)
	{
	case 0:
		pay = a * b * c;
		printf("예상 월급여: %d\n", pay);
		break;
	case 1:
		pay = a * b * c * 0.9159;
		printf("예상 월급여: %d\n", pay);
		break;
	case 2:
		pay = a * b * c * 0.967;
		printf("예상 월급여: %d원\n", pay);
		break;
	default:
		printf("0,1,2 세가지 중 한가지를 입력하세요.");
		break;
	}

	return 0;
}