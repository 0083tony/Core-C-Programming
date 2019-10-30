#include <stdio.h>
#include <stdlib.h> // rand(),srand() 함수
#include <time.h> // time() 함수
void make_graph(int a) {
	a = a / 100;

	for (int i = 0; i <= a; ++i) {
		printf("*");
	}
	printf("\n");
}
int main(void) {
	srand(time(NULL)); // 매회 다른 난수를 얻음
	int i;

	for (i = 0; i < 3; i++) {
		// 0~9999 사이의 난수를 a에 입력
		int a = rand() % 10000;
		printf("%d: ", a);
		make_graph(a);
	}
	return 0;
}