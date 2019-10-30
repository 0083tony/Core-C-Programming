#include<stdio.h>
int main(void) {
	int kwh;
	float a = 0, b = 0;

	printf("월 사용량 (kwh)? ");
	scanf_s("%d", &kwh);

	// 사용한 전력량에 따라 금액 계산
	if (kwh < 201) {
		a = 910;
		b = 93.3 * kwh;
	}
	if (200 < kwh < 401) {
		a = 1600;
		b = 187.9 * (kwh - 200) + (200 * 93.3);
	}
	if (400 < kwh) {
		a = 7300;
		b = 280.6 * (kwh - 400) + (200 * 93.3) + (200 * 187.9);
	}

	printf("전기 요금 합계: %7.0f원\n", a + b);
	printf(" - 기본 요금:   %7.0f원\n", a);
	printf(" - 전력량요금:  %7.0f원\n", b);

	return 0;
}