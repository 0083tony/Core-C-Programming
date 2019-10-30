#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>// strcat()함수
#define MAX 256
int main(void) {
	char name[MAX] = "";
	char extn[MAX] = "";
	char dot[2] = ".";

	printf("파일명? ");
	scanf("%[^\n]s", name);

	getchar(); // 버퍼를 비움

	printf("확장자? ");
	scanf("%[^\n]s", extn);

	// 문자열을 하나로 병합
	strcat(name, dot);
	strcat(name, extn);

	printf("전체 파일명: %s", name);

	return 0;
}