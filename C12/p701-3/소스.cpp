#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //strlen()함수
#define SIZE 300
int main(void) {
	char text_filename[SIZE];
	char text_contents[SIZE];
	
	FILE* fp;
	printf("파일명? ");
	gets_s(text_filename, SIZE);
	fp = fopen(text_filename, "r");
	// 파일을 찾지 못하면 Error! 출력 후 종료
	if (fp == NULL) {
		printf("Error!\n");
		return 1;
	}
	// 영문자를 비교하고 저장할 배열 선언
	char ABC[21] = { 'A','B','C','D','E','F','G','H','I','L','M','N','O','P','R','S','T','U','W','X','Y' };
	char abc[21] = { 'a','b','c','d','e','f','g','h','i','l','m','n','o','p','r','s','t','u','w','x','y' };
	int ABC_num[21];
	for (int i = 0; i < 21; i++) {
		ABC_num[i] = 0;
	}
	// fgets함수는 개행문자(\n)까지 받는다 그러므로 개행문자를 NUL(\0)로 변경 후 출력
	while (!feof(fp)) {
		fgets(text_contents, SIZE, fp);
		if (text_contents[strlen(text_contents) - 1] == '\n') {
			text_contents[strlen(text_contents) - 1] = '\0';
		}
		puts(text_contents);	
		// 영문자 소문자와 대문자를 비교해 ABC_num에 그 갯수를 저장
		for (int i = 0; i < 21; i++) {
			for (int k = 0; k < SIZE; k++) {
				if ((text_contents[k] == abc[i]) || (text_contents[k] == ABC[i]))
					ABC_num[i] = ABC_num[i] + 1;
			}
		}
	}
	// 저장한 영문자의 갯수를 출력
	for (int i = 0; i < 21; i++) {
		printf("%3c:%2d", ABC[i], ABC_num[i]);
		if ((i % 10 == 0) && (i != 0))
			printf("\n");
	}
	fclose(fp);
}