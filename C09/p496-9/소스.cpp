#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>// strcat()�Լ�
#define MAX 256
int main(void) {
	char name[MAX] = "";
	char extn[MAX] = "";
	char dot[2] = ".";

	printf("���ϸ�? ");
	scanf("%[^\n]s", name);

	getchar(); // ���۸� ���

	printf("Ȯ����? ");
	scanf("%[^\n]s", extn);

	// ���ڿ��� �ϳ��� ����
	strcat(name, dot);
	strcat(name, extn);

	printf("��ü ���ϸ�: %s", name);

	return 0;
}