#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(void) {
	// 호출할 때마다 다른 난수를 입력받기 위해 srand로 초기화
	srand((unsigned)time(NULL));
	int height, width;
	printf("배열의 행 크기? ");
	scanf("%d", &height);
	printf("배열의 열 크기? ");
	scanf("%d", &width);

	int** AB = NULL;
	// 2번 malloc()을 호출하면 2차원 동적 메모리를 할당 받을 수 있다.
	AB = (int**)malloc(sizeof(int*) * height);
	for (int i = 0; i < height; i++) {
		AB[i] = (int*)malloc(sizeof(int) * width);
	}
	for (int i = 0; i < height; i++) {
		for (int k = 0; k < width; k++) {
			AB[i][k] = rand() % 10;
			printf("%d ", AB[i][k]);
		}
		printf("\n");
	}
	// 동적 메모리 할당 해제
	free(AB);
}