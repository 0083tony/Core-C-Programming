#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //strlen(), _strlwr()함수 
#define SIZE 300
int  main(void) {
	char text_filename[SIZE];
	char text_contents[SIZE];
	FILE* fp;
	printf("파일명? ");
	gets_s(text_filename, SIZE);
	fp = fopen(text_filename, "r");
	// 파일 이름이 일치하지 않으면 Error! 출력 후 종료
	if (fp == NULL) {
		printf("Error!\n");
		return 1;
	}
	// fgets함수는 개행문자(\n)까지 받는다 그러므로 개행문자를 NUL(\0)로 변경
	while (!feof(fp)) {
		fgets(text_contents, SIZE, fp);
		if (text_contents[strlen(text_contents) - 1] == '\n') {
			text_contents[strlen(text_contents) - 1] = '\0';
		}
		_strlwr(text_contents); // strlwr함수를 이용해 대문자를 소문자로 변경
		puts(text_contents); // 텍스트 내용 출력
	}
	fclose(fp);
}