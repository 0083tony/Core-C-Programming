#include<stdio.h>
int main(void) {
	int a, b = 0;

	// while(1) || for(;;) == 무한루프
	while (1) {
		start:
		printf("주차 시간(분)? ");
		scanf_s("%d", &a);

		// a == 0 일때 루프 탈출
		if (a == 0) {
			break;
		}
		if (a > 1440) {
			printf("주차 시간은 24시간을 넘을 수 없다.\n");
			goto start;
		}
		if (a < 31) {
			printf("주차 요금: 2000원\n");
			goto start;
		}
		else if (a > 30) {
			b = 2000 + (a - 30) / 10 * 1000;
		}
		if (b > 25000) {
			printf("주차 요금: 25000원\n");
			goto start;
		}
		else {
			printf("주차 요금: %d원\n", b + 1000);
			goto start;
		}
	}
	return 0;
}