#include<stdio.h>
int main(void) {
	double arr[3];
	double* p;

	for (int i = 0; i < 3; i++) {
		p = &arr[i];
		// 주소는 %p로 출력
		printf("x[%d]의 주소: %p\n", i, p);
	}
	return 0;
}