#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
void add(const char(*psong)[40], int b) {
	printf("�뷡����? ");
	getchar();
	scanf("%[^\n]s", psong[b]);
}
void modify(const char(*psong)[40], int b) {
	char search[40];
	int find = 0;

	printf("ã�� �뷡 ����? ");
	getchar();
	scanf("%[^\n]s", search);

	for (int i = 0; i < b; i++) {

		if (psong[i][40] == *search) {
			printf("������ ����? ");
			getchar();
			scanf("%[^\n]s", psong[i + 1]);
			find++;
		}
	}
	if (find == 0) printf("�뷡�� ã���� �����ϴ�.\n");
}
void list(const char(*psong)[40], int b) {
	printf("<<�뷡���>>\n");

	for (int i = 0; i < b; i++) {
		printf("%s\n", psong[i]);
	}
}
int main(void) {
	char song[20][40];
	unsigned int a, b = 0;

	for (;;) {
		printf("[ 0.���� 1.�߰� 2.���� 3.��� ] ����? ");
		scanf("%d", &a);

		if (a > 3) {
			printf("�ùٸ� ���ڸ� �Է��� �ּ���.\n");
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