#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct POINT {
	int x1;
	int x2;
	int y1;
	int y2;
};
void normalize_rect(int* arr, struct POINT* RECT, int a) {
	int temp;

	for (int i = 0; i < 4; i++) {
		for (int k = 0; k < 3; k++) {
			if (arr[k] > arr[k + 1]) {
				temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
			}
		}
	}
	RECT[a].x1 = arr[0];
	RECT[a].y1 = arr[1];
	RECT[a].x2 = arr[2];
	RECT[a].y2 = arr[3];
}
void center_rect(struct POINT* RECT, int a) {
	int ct1, ct2;

	ct1 = (RECT[a].x1 + RECT[a].x2) / 2;
	ct2 = (RECT[a].y1 + RECT[a].y2) / 2;

	printf("[ RECT좌하단점:(%d,%d) 우상단점:(%d,%d) ]	중심점:(%d, %d)\n", RECT[a].x1, RECT[a].y1, RECT[a].x2, RECT[a].y2, ct1, ct2);
}
int main(void) {
	srand(time(NULL));
	struct POINT RECT[3];
	int arr[5];

	for (int a = 0; a < 3; a++) {
		for (int i = 0; i < 4; i++) {
			arr[i] = rand() % 100;
		}
		normalize_rect(arr, RECT, a);
		center_rect(RECT, a);
	}
	return 0;
}