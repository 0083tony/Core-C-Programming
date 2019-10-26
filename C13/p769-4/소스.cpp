#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141592 // PI를 3.141592로 정의
#define AREA_RECT(w,h) ((w)*(h))
#define AREA_CIRCLE(r) ((r)*PI)
#include <stdio.h>
int main(void) {
	int i;
	int w, h, r;

	// 무한 루프
	for (;;) {
		printf("도형의 종류(1.직사각형  2.원  0.종료)? ");
		scanf("%d", &i);

		// 0이 입력되면 무한 루프를 빠져나감
		if (i == 0) {
			printf("프로그램을 종료합니다.\n");
			break;
		}
		// 1이 입력되면 AREA_RECT 매크로 함수를 실행
		if (i == 1) {
			printf("가로 세로? ");
			scanf("%d %d", &w, &h);
			printf("면적: %d\n", AREA_RECT(w, h));
		}
		// 2가 입력되면 AREA_CIRCLE 매크로 함수를 실행
		if (i == 2) {
			printf("반지름? ");
			scanf("%d", &r);
			printf("면적: %lf\n", AREA_CIRCLE(r));
		}
		// 2보다 큰 값이 들어오면 실행
		else if (i > 2) {
			printf("0~2 사이의 숫자를 입력해 주세요!!\n");
		}
	}
}
