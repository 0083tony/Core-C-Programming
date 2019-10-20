#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcmp()함수
#define SIZE 10
struct Login {
	char ID[SIZE];
	char Password[SIZE];
};
int main(void) {
	struct Login a[4];
	char ID[SIZE];
	char Password[SIZE];
	FILE* fp;
	fp = fopen("password.txt", "r");
	// 텍스트에 저장된 정보를 구조체로 가져옴
	for (int i = 0; i < 4; i++) {
		fscanf(fp, "%s %s", &a[i].ID, &a[i].Password);
	}
	// 파일 닫기
	fclose(fp);
	for (;;) {
	start:
		printf("ID? ");
		scanf("%s", ID);
		// .을 입력하면 프로그램 종료
		if (*ID == '.')
			break;
		for (int i = 0; i < 4; i++) {
			// ID 비교
			if (!strcmp(ID, a[i].ID)) {
				getchar();
				printf("Password? ");
				scanf("%s", Password);
				// Password 비교
				if (!strcmp(Password, a[i].Password)) {
					printf("Login Successful!\n");
					goto start;
				}
				printf("Password Error!\n");
				goto start;
			}
		}
		printf("ID Error!\n");
	}
}