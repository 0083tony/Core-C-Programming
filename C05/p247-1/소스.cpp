#include<stdio.h>
int main(void) {
	int left, top, right, bottom;
	int x, y;

	printf("선택 영역의 좌상단점 (left, top)? ");
	scanf_s("%d %d", &left, &top);
	printf("선택 영역의 우하단점 (right, botton)? ");
	scanf_s("%d %d", &right, &bottom);

	printf("점의 좌표 (x, y)");
	scanf_s("%d %d", &x, &y);

	// 대소비교를 통해 영역 안의 점인지 아닌지 확인
	if (left <= x && x <= right && top <= y && y <= bottom) {
		printf("직사각형 모양의 선택 영역 내의 점입니다.");
	}
	else {
		printf("직사각형 모양의 선택 영역 안이 아닙니다.");
	}

	return 0;
}