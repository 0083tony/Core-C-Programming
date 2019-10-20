#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //malloc()함수, srand()함수, atoi()함수
#include <time.h> // time()함수
#include <string.h> // strcat()함수, strtok()함수
#define SIZE 50
int main(void) {
	srand(time(NULL));
	int num;
	int* N = NULL;
	char name[SIZE];
	char ext[2][SIZE] = { 
		{".txt"},
		{".dat"}
	};
	printf("정수의 개수? ");
	scanf("%d", &num);
	printf("파일명? ");
	scanf("%s", name);
	// 동적 메모리 할당
	N = (int*)malloc(sizeof(int) * num);
	if (N == NULL){
		printf("Error!\n");
		return 1;
	}
	// .txt 확장자 추가
	strcat(name, ext[0]);
	FILE* fp10;
	fp10 = fopen(name, "w");

	if (fp10 == NULL) {
		printf("Error!\n");
		return 1;
	}
	// name.txt에서 .txt 삭제 후 name.dat으로 변경
	char* ptr = strtok(name, ".");
	strcat(ptr, ext[1]);
	FILE* fp2;
	fp2 = fopen(ptr, "wb");

	if (fp2 == NULL) {
		printf("Error!\n");
		return 1;
	}
	// rand()함수로 0~99사이의 난수를 입력
	for (int i = 0; i < num; i++) {
		N[i] = rand();
		fprintf(fp10, "%d\n", N[i]);
		fprintf(fp2, "%02x\n", N[i]);
	}
	// 확장자 지우기
	char* ptr2 = strtok(name, ".");
	printf("%s.txt와 %s.dat을 생성했습니다.\n", ptr2, ptr2);
	// 할당된 동적 메모리와 파일 초기화
	fclose(fp10);
	fclose(fp2);
	free(N);
}