#define _CRT_SECURE_NO_WARRINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct POINT {
	int x;
	int y;
};
void swap_point(struct POINT* point) {
	int temp;
	struct POINT save[10] = {
		{point[0].x,point[0].y},
		{point[1].x,point[1].y},
		{point[2].x,point[2].y},
		{point[3].x,point[3].y},
		{point[4].x,point[4].y},
		{point[5].x,point[5].y},
		{point[6].x,point[6].y},
		{point[7].x,point[7].y},
		{point[8].x,point[8].y},
		{point[9].x,point[9].y},
	};

	for (int i = 0; i < 10; i++) {
		for (int k = 0; k < 9; k++) {

			if (point[k].x > point[k + 1].x) {
				temp = point[k].x;
				point[k].x = point[k + 1].x;
				point[k + 1].x = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int k = 0; k < 9; k++) {

			if (point[i].x == save[k].x) {
				point[i].y = save[k].y;
			}
		}
	}
}
int main(void) {
	struct POINT point[10];
	srand(time(NULL));

	printf("<<정렬 전>>\n");

	for (int i = 0; i < 10; i++) {
		point[i].x = rand() % 100;
		point[i].y = rand() % 100;
		printf("(%d,%d) ", point[i].x, point[i].y);
	}

	printf("\n<<정렬 후>>\n");
	swap_point(point);

	for (int i = 0; i < 10; i++) {
		printf("(%d,%d) ", point[i].x, point[i].y);
	}
	return 0;
}