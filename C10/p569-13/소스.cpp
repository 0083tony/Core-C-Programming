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
	printf("[RECT ���ϴ���: (%d,%d) ������: (%d,%d)]\n", RECT.x1, RECT.y1, RECT.x2, RECT.y2);
}
int main(void) {
	struct POINT RECT;

	printf("���簢���� ���ϴ���(x,y)? ");
	scanf("%d %d", &RECT.x1, &RECT.y1);
	printf("���簢���� ������(x,y)? ");
	scanf("%d %d", &RECT.x2, &RECT.y2);

	print_rect(RECT);

	return 0;
}