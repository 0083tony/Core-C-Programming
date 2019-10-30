#include<stdio.h>
int main(void) {
	int a, b, c;

	printf("구간 단속 소요 시간 (분)? ");
	scanf_s("%d", &a);
	printf("구간 단속 주행 거리 (km)? ");
	scanf_s("%d", &b);

	// 평균 속력 c를 구함
	c = (60 / a) * b;

	// 대소 비교를 사용해 c가 100이상이면 과속
	printf("평균 속력은 %d km/h입니다. ", c);
	if (c > 99) {
		printf("구간 단속 과속입니다.");
	}
	else {
		printf("구간 단속 과속이 아닙니다.");
	}

	return 0;
}