#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //strlen(), _strlwr()�Լ� 
#define SIZE 300
int  main(void) {
	char text_filename[SIZE];
	char text_contents[SIZE];
	FILE* fp;
	printf("���ϸ�? ");
	gets_s(text_filename, SIZE);
	fp = fopen(text_filename, "r");
	// ���� �̸��� ��ġ���� ������ Error! ��� �� ����
	if (fp == NULL) {
		printf("Error!\n");
		return 1;
	}
	// fgets�Լ��� ���๮��(\n)���� �޴´� �׷��Ƿ� ���๮�ڸ� NUL(\0)�� ����
	while (!feof(fp)) {
		fgets(text_contents, SIZE, fp);
		if (text_contents[strlen(text_contents) - 1] == '\n') {
			text_contents[strlen(text_contents) - 1] = '\0';
		}
		_strlwr(text_contents); // strlwr�Լ��� �̿��� �빮�ڸ� �ҹ��ڷ� ����
		puts(text_contents); // �ؽ�Ʈ ���� ���
	}
	fclose(fp);
}