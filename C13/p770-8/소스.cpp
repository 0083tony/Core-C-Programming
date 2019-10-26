#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>// strlen() 함수
#include <stdlib.h>// Argc,Argv
#define SIZE 300

int main(int argc, char** argv) {
	const char* text_filename = argv[1];
	char text_contents[SIZE];
	int count = 1;

	FILE* fp = fopen(text_filename, "rt");

	// 파일을 찾지못하면 파일을 닫고 종료
	if (fp == NULL) {
		printf("Not Found Error! %s\n", argv[1]);
		exit(1);
	}

	while (!feof(fp)) {
		// fgets함수는 개행문자(\n)까지 받는다 그러므로 개행문자를 NUL(\0)로 변경
		fgets(text_contents, SIZE, fp);
		if (text_contents[strlen(text_contents) - 1] == '\n')
			text_contents[strlen(text_contents) - 1] = '\0';
		printf("%3d: ", count); // 라인 번호 출력;
		puts(text_contents);
		count++;
	}
	fclose(fp);
}