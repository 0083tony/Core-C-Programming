#include "myheader.h"

int main(void) {
	struct POINT P[2] = {};

#if(KEY == 0)

	for (int i = 0; i < 2; i++) {
		print_point();
		set_point(&P[i].x, &P[i].y);
	}

	printf("(%.0f,%.0f)과 (%.0f,%.0f)사이의 거리: %f", P[0].x, P[0].y, P[1].x, P[1].y, get_length(P[0].x, P[0].y, P[1].x, P[1].y));
#else

	for (int i = 0; i < 2; i++) {
		print_point();
		set_point(&P[i].x, &P[i].y);
	}

	printf("(%.2f,%.2f)과 (%.2f,%.2f)사이의 거리: %f", P[0].x, P[0].y, P[1].x, P[1].y, get_length(P[0].x, P[0].y, P[1].x, P[1].y));
#endif
	return 0;
}