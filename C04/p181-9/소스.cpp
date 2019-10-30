#include<stdio.h>
int main(void) {
	int h, m, s;

	printf("재생시간(초)? ");
	scanf_s("%d", &s);

	m = s / 60;
	h = m / 60;
	s = s % 60;
	m = m % 60;

	printf("재생시간은 %d시간 %d분 %d초입니다.", h, m, s);

	/*
	if문을 사용해 변형 가능
	if(h == 0 && m != 0) {
		printf("재생시간은 %d분 %d초입니다.", m, s);
	}
	if (h == 0 && m == 0) {
		printf("재생시간은 %d초입니다.", s);
	}
	if (h != 0) {
		printf("재생시간은 %d시간 %d분 %d초입니다.", h, m, s);
	}*/

	return 0;
}