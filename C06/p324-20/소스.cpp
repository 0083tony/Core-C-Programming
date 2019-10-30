#include<stdio.h>
double electric_charge(unsigned int kwh) {
	double a = 0, b = 0;

	// 사용량에 따른 전력량 요금 + 기본 요금 계산
	if (0 < kwh <= 20) {
		a = 910;
		b = 93.3 * kwh;

		if (200 < kwh < 400) {
			a = 1600;
			b = 187.9 * (kwh - 200) + (200 * 93.3);

			if (400 < kwh) {
				a = 7300;
				b = 280.6 * (kwh - 400) + (200 * 93.3) + (200 * 187.9);
			}
		}
	}
	// a == 기본 요금, b == 전력량 요금
	return a + b;
}
int main(void) {
	unsigned int kwh;

	for (;;) {
		printf("월 사용량 (kwh)? ");
		scanf_s("%d", &kwh);
		// -1 입력시 프로그램 종료
		if (kwh == -1) break;

		printf("전기 요금 합계: %.0f원\n", electric_charge(kwh));
	}
	return 0;
}