#include<stdio.h>
int main(void) {
	int x, y;

	printf("점의 좌표 (x, y)? ");
	scanf_s("%d %d", &x, &y);

	// 대소 비교를 통해 몇 사분면 위의 점인지 출력
	if (x > 0 && y > 0) {
		printf("1사분면에 있습니다.");
	}
	if (x < 0 && y > 0) {
		printf("2사분면에 있습니다.");
	}
	if (x < 0 && y < 0) {
		printf("3사분면에 있습니다.");
	}
	if (x > 0 && y < 0) {
		printf("4사분면에 있습니다.");
	}

	return 0;
}