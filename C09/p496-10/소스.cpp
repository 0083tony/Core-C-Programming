#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h> //strlen(),strupr()�Լ�
#include<ctype.h> //isblank()�Լ�
#define MAX 256
int main(void) {
	char name[MAX] = "";

	for (;;) {
		printf("���� �̸�? ");
		scanf("%[^\n]s", name);// %[^\n]s == \n�� ������ ��� ���ڸ� �Է¹���

		getchar();// ���۸� ���

		if (*name == '.')// .�Է½� ���α׷� ����
			break;
		
		printf("�̴ϼ�: ");

		_strupr(name);// �Լ��� _���̸� error C4996 ���� x

		for (size_t i = 0; i < strlen(name); i++) {
			if (i == 0) {
				printf("%c", name[0]);
			}
			// ���� ���� ���� ���ڸ� ����
			if (isblank(name[i])) {
				printf("%c", name[i + 1]);
			}
		}
		printf("\n");
	}
	return 0;
}