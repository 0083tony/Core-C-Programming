#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct POINT {
	int x1;
	int x2;
	int y1;
	int y2;
};
void print_rect(struct POINT RECT) {
	printf("[RECT 좌하단점: (%d,%d) 우상단점: (%d,%d)]\n", RECT.x1, RECT.y1, RECT.x2, RECT.y2);
}
int main(void) {
	struct POINT RECT;

	printf("직사각형의 좌하단점(x,y)? ");
	scanf("%d %d", &RECT.x1, &RECT.y1);
	printf("직사각형의 우상단점(x,y)? ");
	scanf("%d %d", &RECT.x2, &RECT.y2);

	print_rect(RECT);

	return 0;
}