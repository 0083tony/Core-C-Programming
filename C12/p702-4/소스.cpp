#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcmp()�Լ�
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
	// �ؽ�Ʈ�� ����� ������ ����ü�� ������
	for (int i = 0; i < 4; i++) {
		fscanf(fp, "%s %s", &a[i].ID, &a[i].Password);
	}
	// ���� �ݱ�
	fclose(fp);
	for (;;) {
	start:
		printf("ID? ");
		scanf("%s", ID);
		// .�� �Է��ϸ� ���α׷� ����
		if (*ID == '.')
			break;
		for (int i = 0; i < 4; i++) {
			// ID ��
			if (!strcmp(ID, a[i].ID)) {
				getchar();
				printf("Password? ");
				scanf("%s", Password);
				// Password ��
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