#include<stdio.h>
int main(void) {
	float a, b;
	int min;

	printf("이동 거리(km)? ");
	scanf_s("%f", &a);
	printf("예상 속력(km/h)? ");
	scanf_s("%f", &b);

	// 입력받은 실수를 정수형으로 변환
	min = int(a / b * 60);

	printf("도착까지 예상 소요 시간은 %d분입니다.", min);

	return 0;
}