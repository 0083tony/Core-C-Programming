#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>// srand(),rand()함수
#include<time.h>// time()함수
#define MAX 256
int main(void) {
	srand(time(NULL));
	char tip[4][MAX] = {
		"Live Photo의 스틸 이미지를 변경할 수 있습니다.",
		"스크린 타임에서 iPhone의 하루 사용 시간을 확인할 수 있습니다.",
		"C언어는 객체 지향도 못하는 바보",
		"예비군가기 싫다..."
	};

	printf("엔터키를 누를 때마다 사용 팁을 보여줍니다.\n");

	while (getchar() != EOF) {
		int a = rand() % 4;
		printf("%s\n", tip[a]);
	}
	return 0;
}