#include<stdio.h>
int main(void) {
	int day, hour, min;
	float a;

	printf("비행 소요시간(시간)? ");
	scanf_s("%f", &a);

	day = a / 24;
	hour = a - day * 24;
	min = (a - (int)a) * 60;
	printf("비행 소요시간은 %d일 %d시간 %d분 입니다.", day, hour, min);

	/*제어문 사용
	if (a >= 24) {
		day = a / 24;
		hour = a - day * 24;
		min = (a - (int)a) * 60;
		printf("비행 소요시간은 %d일 %d시간 %d분 입니다.", day, hour, min);
	}
	else {
		hour = a;
		min = (a - (int)a) * 60;
		printf("비행 소요시간은 %d시간 %d분 입니다.", hour, min);
	}*/
	return 0;
}