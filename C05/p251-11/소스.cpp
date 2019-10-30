#include<stdio.h>
int main(void) {
	unsigned int ui;
	int i = 1;

	// for문을 사용해 31번 반복
	for (ui = 0; ui <= 31; ui++) {
		// 쉬프트 연산
		printf("%2d번 비트만 1인 값: %08x %d\n", ui, i << ui, i << ui);
	}
	return 0;
}