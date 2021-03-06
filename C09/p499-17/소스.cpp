#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
void add(const char(*psong)[40], int b) {
	printf("노래제목? ");
	getchar();
	scanf("%[^\n]s", psong[b]);
}
void modify(const char(*psong)[40], int b) {
	char search[40];
	int find = 0;

	printf("찾을 노래 제목? ");
	getchar();
	scanf("%[^\n]s", search);

	for (int i = 0; i < b; i++) {

		if (psong[i][40] == *search) {
			printf("수정할 제목? ");
			getchar();
			scanf("%[^\n]s", psong[i + 1]);
			find++;
		}
	}
	if (find == 0) printf("노래를 찾을수 없습니다.\n");
}
void list(const char(*psong)[40], int b) {
	printf("<<노래목록>>\n");

	for (int i = 0; i < b; i++) {
		printf("%s\n", psong[i]);
	}
}
int main(void) {
	char song[20][40];
	unsigned int a, b = 0;

	for (;;) {
		printf("[ 0.종료 1.추가 2.수정 3.목록 ] 선택? ");
		scanf("%d", &a);

		if (a > 3) {
			printf("올바른 숫자를 입력해 주세요.\n");
		}
		if (a == 1) {
			add(song, b);
			b++;
		}
		if (a == 2)modify(song, b);
		if (a == 3)list(song, b);
		if (a == 0)break;
	}
	return 0;
}