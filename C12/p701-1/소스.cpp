#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strlen() �Լ�
#include <stdlib.h> // exit()�Լ�
#define SIZE  100
int main(void) {
	char text_filename[SIZE];
	char text_contents[SIZE];
	int count = 1; // ���� ��ȣ
	FILE* fp;
	printf("���ϸ�? ");
	gets_s(text_filename, SIZE);
	fp = fopen(text_filename, "r");

	// ���� �̸��� ��ġ���� ������ Error! ��� �� ����
	if (fp == NULL) {
		printf("Error!\n");
		exit(1);
	}

	// fgets�Լ��� ���๮��(\n)���� �޴´� �׷��Ƿ� ���๮�ڸ� NUL����(\0)�� ����
	while (!feof(fp)) {
		fgets(text_contents, SIZE, fp);
		if (text_contents[strlen(text_contents) - 1] == '\n') {
			text_contents[strlen(text_contents) - 1] = '\0';
		}
		printf("%3d: ", count); // ���� ��ȣ ���
		puts(text_contents); // �ؽ�Ʈ ���� ���
		count++; // ���� ��ȣ ����
	}
	fclose(fp);
}