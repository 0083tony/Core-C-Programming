#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int choose_menu(void) {
	int a;

	printf("[1. 파일 열기  2.파일 저장  3.인쇄  0.종료] ");
	scanf("%d", &a);
	
	// 입력 받은 a를 리턴
	return a;
}
int main(void) {

	for (;;) {
		// choose_menu()함수의 리턴값으로 수행할 내용이 정해짐
		switch (choose_menu()) {
		case 1:
			printf("파일 열기를 수행합니다.\n");
			break;
		case 2:
			printf("파일 저장을 수행합니다.\n");
			break;
		case 3:
			printf("인쇄를 수행합니다.\n");
			break;
		case 0:
			return 0;
		}
	}
	return 0;
}