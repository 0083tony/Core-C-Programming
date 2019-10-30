#include<stdio.h>
int main(void) {
	int ASCII;
	int i = 1;

	// for문을 사용해 ASCII 코드 32~127까지를 출력
	for (ASCII = 32; ASCII < 127; ASCII++) {
		printf("%c ", ASCII);

		// i가 24와 나누기 연산시 나머지가 0이 될때마다 줄 변경
		if (i % 24 == 0)
			printf("\n");
		i++;
	}
	return 0;
}