#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>// strcmp()�Լ�
#define MAX 256
/*
1. ID: abc123  PASS:123abc
2. ID: mmm123  PASS:123mmm
3. ID: mango   PASS:delicious
4. ID: need    PASS:money
5. ID: admin   PASS:want_to_go_home
*/
int main(void) {
	int num = 0;
	char ID[5][MAX]{
		"abc123",
		"mmm123",
		"mango",
		"need",
		"admin"
	};
	char PASS[5][MAX]{
		"123abc",
		"123mmm",
		"delicious",
		"money",
		"want_to_go_home"
	};
	char id[MAX] = "";
	char pass[MAX] = "";

	for (;;) {
	start:

		printf("ID: ");
		scanf("%s", id);
		printf("PW: ");
		scanf("%s", pass);

		for (int i = 0; i < 5; i++) {
			if (strcmp(ID[i], id) == 0) { //check ID
				if (strcmp(PASS[i], pass) == 0) { //check PW
					printf("�α��� ����!\n");
					return 0;
				}
				else {
					printf("�н����尡 Ʋ�Ƚ��ϴ�.\n");
					num++;
					goto start;
				}
			}
		}
		printf("�ش� id�� �����ϴ�.\n");
		num++;

		if (num == 3) {
			printf("�α��� ���� Ƚ�� �ʰ�\n");
			break;
		}
	}
	return 0;
}