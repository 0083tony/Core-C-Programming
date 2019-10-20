#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcmp()함수
#define SIZE 10
struct Login {
	char ID[SIZE] = "";
		char Password[SIZE] = "";
};
int main(void) {
	struct Login a[20];
	char ID[SIZE];
	char Password[SIZE];
	char yesno;
	int count = 4;
	FILE* fp;
	fp = fopen("password.txt", "r");
	// 텍스트에 저장된 정보를 구조체로 가져옴
	for (int i = 0; i < 4; i++) {
		fscanf(fp, "%s %s", &a[i].ID, &a[i].Password);
	}
	fclose(fp);
	for (;;) {
	start:
		printf("ID?  ");
		scanf("%s", ID);
		// .을 입력하면 프로그램 종료
		if (*ID == '.')
			break;
		for (int i = 0; i < 20; i++) {
			// ID 비교
			if (!strcmp(ID, a[i].ID)) {
				getchar();
				printf("Password?  ");
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
		printf("Add ID?  ");
		getchar();
		scanf("%c", &yesno);
		// ID 추가 Y/N 
		if ((yesno == 'Y') || (yesno == 'y')) {
			// Y 입력시 ID를 구조체에 저장
			strncpy(a[count].ID, ID, SIZE);
		PW:
			// Password 입력
			printf("Password?  ");
			scanf("%s", a[count].Password);
			// Password를 한번 더 입력받아 구조체에 저장된 Pasword와 비교
			printf("Password again?  ");
			scanf("%s", Password);
			// Password 일치 시 ID PW 추가 성공문자 출력
			if (!strcmp(a[count].Password, Password)) {
				printf("ID and Password registered Successful!\n");
				count++;
				goto start;
			}
			printf("Password doesn't match!\n");
			goto PW;
		}
	}
	// Login 구조체에 저장된 내용을 파일로 출력
	fp = fopen("password.txt", "w");
	fwrite(&a, sizeof(struct Login), count, fp);
	fclose(fp);
	return 0;
}