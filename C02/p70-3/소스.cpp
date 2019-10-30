#include <stdio.h>
int main(void)
{
	int x, y, z;

	// 정수를 %d로 입력 받음 
	printf("연? ");
	scanf_s("%d", &x);

	printf("월? ");
	scanf_s("%d", &y);

	printf("일? ");
	scanf_s("%d", &z);


	// 정수를 %d로 출력
	printf("입력한 날짜는 %d년 %d월 %d일 입니다.", x, y, z);

	return 0;
}