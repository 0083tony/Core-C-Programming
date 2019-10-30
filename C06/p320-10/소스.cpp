#include <stdio.h>
#include <stdlib.h> //rand() 함수
#include <time.h> //time() 함수
int random(int add) {
	int random = 0;
	srand(time(NULL)); // 매 출력마다 다른 변수를 얻음

	for (int i = 0; i < 10; i++) {
		// rand() % 100 == 0~99 사이의 랜덤 정수
		random = rand() % 100;
		printf("%5d", random);
		add = random + add;
	}
	return add;
}
int main(void) {
	int add = 0;

	printf("0 ~ 99사이의 임의의 정수를 10개 생성해서 합계를 구합니다.\n");
	printf("\n합계: %d", random(add));

	return 0;
}