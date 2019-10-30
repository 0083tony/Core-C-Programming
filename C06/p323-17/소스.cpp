#include<stdio.h>
int get_quadrant(int x, int y) {

	// 점의 위치 n분면을 찾아서 리턴
	if (x > 0 && y > 0) return 1;

	else if (x < 0 && y > 0) return 2;

	else if (x < 0 && y < 0) return 3;

	else if (x > 0 && y < 0) return 4;
		
	return 0;
}
int main(void) {
	int x, y;

	for (;;) {
		printf("점의 좌표 (x, y)? ");
		scanf_s("%d %d", &x, &y);

		switch (get_quadrant(x, y)) {
			// 0 리턴시 프로그램 종료
		case 0:
			return 0;
		case 1:
			printf("1사분면에 있습니다.\n");
			break;
		case 2:
			printf("2사분면에 있습니다.\n");
			break;
		case 3:
			printf("3사분면에 있습니다.\n");
			break;
		case 4:
			printf("4사분면에 있습니다.\n");
			break;
		}
	}
}