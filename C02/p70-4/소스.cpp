#include<stdio.h>
int main(void)
{
	int x, y, z;

	// 정수를 %d로 입력 받음
	printf("시? ");
	scanf_s("%d", &x);

	printf("분? ");
	scanf_s("%d", &y);

	printf("초? ");
	scanf_s("%d", &z);

	// %02d == 한자리 숫자라면 0을 같이 출력해 두자리로 표현
	printf("입력한 시간은 %02d:%02d:%02d", x, y, z);

	return 0;
}