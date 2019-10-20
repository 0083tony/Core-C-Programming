#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strlen() 함수
#include <stdlib.h> // exit()함수
#define SIZE  100
int main(void) {
	char text_filename[SIZE];
	char text_contents[SIZE];
	int count = 1; // 라인 번호
	FILE* fp;
	printf("파일명? ");
	gets_s(text_filename, SIZE);
	fp = fopen(text_filename, "r");

	// 파일 이름이 일치하지 않으면 Error! 출력 후 종료
	if (fp == NULL) {
		printf("Error!\n");
		exit(1);
	}

	// fgets함수는 개행문자(\n)까지 받는다 그러므로 개행문자를 NUL문자(\0)로 변경
	while (!feof(fp)) {
		fgets(text_contents, SIZE, fp);
		if (text_contents[strlen(text_contents) - 1] == '\n') {
			text_contents[strlen(text_contents) - 1] = '\0';
		}
		printf("%3d: ", count); // 라인 번호 출력
		puts(text_contents); // 텍스트 내용 출력
		count++; // 라인 번호 증가
	}
	fclose(fp);
}