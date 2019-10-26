#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>// strlen() �Լ�
#include <stdlib.h>// Argc,Argv
#define SIZE 300

int main(int argc, char** argv) {
	const char* text_filename = argv[1];
	char text_contents[SIZE];
	int count = 1;

	FILE* fp = fopen(text_filename, "rt");

	// ������ ã�����ϸ� ������ �ݰ� ����
	if (fp == NULL) {
		printf("Not Found Error! %s\n", argv[1]);
		exit(1);
	}

	while (!feof(fp)) {
		// fgets�Լ��� ���๮��(\n)���� �޴´� �׷��Ƿ� ���๮�ڸ� NUL(\0)�� ����
		fgets(text_contents, SIZE, fp);
		if (text_contents[strlen(text_contents) - 1] == '\n')
			text_contents[strlen(text_contents) - 1] = '\0';
		printf("%3d: ", count); // ���� ��ȣ ���;
		puts(text_contents);
		count++;
	}
	fclose(fp);
}