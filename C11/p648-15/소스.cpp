#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void  extend_array(int** AB, int* size) {
	int new_size = *size * 2;
	// 기존의 AB보다 배열이 2배 큰 new_AB
	int* new_AB = (int*)malloc(sizeof(int) * new_size);
	for (int i = 0; i < *size; i++) {
		// AB의 값을 new_AB로 복사
		new_AB[i] = (*AB)[i];
	}
	// AB 초기화, 기존 값보다 2배 큰 size를 main함수로 전달 
	free(*AB);
	*AB = new_AB;
	*size = (*size) * 2;
}
int main(void) {
	int* AB = NULL;
	int size = 2;
	int i = 0;
	int add = 0;
	AB = (int*)malloc(sizeof(int) * size);
	printf("배열에 추가할 원소? ");
	for (;;) {
		scanf("%d", &AB[i]);
		// -1 을 입력하면 배열 추가를 멈춤
		if (AB[i] == -1)
			break;
		// i+1 과 size가 같으면 extend_array 함수를 호출
		if (i + 1 == size)
			extend_array(&AB, &size);
		i++;
	}
	printf("배열의 최대 크기: %d, 현재 저장된 원소 수: %d\n", size, i);
	printf("배열: ");
	for (int k = 0; k < i; k++) {
		// AB의 요소를 출력하고 그 값의 합을 add에 저장
		printf("%3d", AB[k]);
		add = AB[k] + add;
	}
	printf("\n배열의 합계: %d", add);
}