#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcmp()�Լ�
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
	// �ؽ�Ʈ�� ����� ������ ����ü�� ������
	for (int i = 0; i < 4; i++) {
		fscanf(fp, "%s %s", &a[i].ID, &a[i].Password);
	}
	fclose(fp);
	for (;;) {
	start:
		printf("ID?  ");
		scanf("%s", ID);
		// .�� �Է��ϸ� ���α׷� ����
		if (*ID == '.')
			break;
		for (int i = 0; i < 20; i++) {
			// ID ��
			if (!strcmp(ID, a[i].ID)) {
				getchar();
				printf("Password?  ");
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
		printf("Add ID?  ");
		getchar();
		scanf("%c", &yesno);
		// ID �߰� Y/N 
		if ((yesno == 'Y') || (yesno == 'y')) {
			// Y �Է½� ID�� ����ü�� ����
			strncpy(a[count].ID, ID, SIZE);
		PW:
			// Password �Է�
			printf("Password?  ");
			scanf("%s", a[count].Password);
			// Password�� �ѹ� �� �Է¹޾� ����ü�� ����� Pasword�� ��
			printf("Password again?  ");
			scanf("%s", Password);
			// Password ��ġ �� ID PW �߰� �������� ���
			if (!strcmp(a[count].Password, Password)) {
				printf("ID and Password registered Successful!\n");
				count++;
				goto start;
			}
			printf("Password doesn't match!\n");
			goto PW;
		}
	}
	// Login ����ü�� ����� ������ ���Ϸ� ���
	fp = fopen("password.txt", "w");
	fwrite(&a, sizeof(struct Login), count, fp);
	fclose(fp);
	return 0;
}