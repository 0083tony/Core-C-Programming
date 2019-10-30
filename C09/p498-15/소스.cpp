#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>// strlen()함수
char time_to_string(char* time, int a, int h, int m, int s) {

	if (h > 24 || m > 60 || s > 60) {
		return -1;
	}
	// 정수를 문자열로 변환
	sprintf(&time[0], "% d", h);
	sprintf(&time[4], "% d", m);
	sprintf(&time[8], "% d", s);

	time[3] = ':';
	time[7] = ':';

	return a;
}
int main(void) {
	char time[12];
	int h, m, s;
	int a = strlen(time); // 문자열의 크기

	printf("시 분 초? ");
	scanf("%d %d %d", &h, &m, &s);

	time_to_string(time, a, h, m, s);

	printf("%s", time);

	return 0;
}