#include<stdio.h>
int is_leap_year(int i) {
	
	if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0)) {
		return i;
	}
	return 0;
}
int main(void) {
	int count = 0; // 윤년을 출력하는 횟수 카운터

	printf("2000년 ~ 2100년 사이의 윤년\n");

	for (int i = 2000; i < 2101; i++) {

		// 리턴값이 0이 아니면 함수에서 찾은 윤년 i를 출력
		if (is_leap_year(i) != 0) {
			printf("%d년  ", i);
			count++;

			// 10개의 윤년을 찾을때 마다 줄바꿈
			if (count % 10 == 0) {
				printf("\n");
			}
		}
	}
	return 0;
}