#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h> //strlen(),strupr()함수
#include<ctype.h> //isblank()함수
#define MAX 256
int main(void) {
	char name[MAX] = "";

	for (;;) {
		printf("영문 이름? ");
		scanf("%[^\n]s", name);// %[^\n]s == \n을 제외한 모든 문자를 입력받음

		getchar();// 버퍼를 비움

		if (*name == '.')// .입력시 프로그램 종료
			break;
		
		printf("이니셜: ");

		_strupr(name);// 함수에 _붙이면 error C4996 오류 x

		for (size_t i = 0; i < strlen(name); i++) {
			if (i == 0) {
				printf("%c", name[0]);
			}
			// 공백 문자 뒤의 문자를 저장
			if (isblank(name[i])) {
				printf("%c", name[i + 1]);
			}
		}
		printf("\n");
	}
	return 0;
}