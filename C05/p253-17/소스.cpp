#include<stdio.h>
int main(void) {
	int a, b = 0;

	printf("주차 시간(분)? ");
	scanf_s("%d", &a);

	if (a > 1440) {
		printf("주차 시간은 24시간을 넘을 수 없다.");
		return 0;
	}
	if (a < 31) {
		printf("주차 요금: 2000원\n");
		return 0;
	}
	else if (a > 30) {
		b = 2000 + (a - 30) / 10 * 1000;
	}
	if (b > 25000) {
		printf("주차 요금: 25000원\n");
		return 0;
	}
	else {
		printf("주차 요금: %d원\n", b + 1000);
		return 0;
	}
}