#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //strlen()�Լ�
#define SIZE 300
int main(void) {
	char text_filename[SIZE];
	char text_contents[SIZE];
	
	FILE* fp;
	printf("���ϸ�? ");
	gets_s(text_filename, SIZE);
	fp = fopen(text_filename, "r");
	// ������ ã�� ���ϸ� Error! ��� �� ����
	if (fp == NULL) {
		printf("Error!\n");
		return 1;
	}
	// �����ڸ� ���ϰ� ������ �迭 ����
	char ABC[21] = { 'A','B','C','D','E','F','G','H','I','L','M','N','O','P','R','S','T','U','W','X','Y' };
	char abc[21] = { 'a','b','c','d','e','f','g','h','i','l','m','n','o','p','r','s','t','u','w','x','y' };
	int ABC_num[21];
	for (int i = 0; i < 21; i++) {
		ABC_num[i] = 0;
	}
	// fgets�Լ��� ���๮��(\n)���� �޴´� �׷��Ƿ� ���๮�ڸ� NUL(\0)�� ���� �� ���
	while (!feof(fp)) {
		fgets(text_contents, SIZE, fp);
		if (text_contents[strlen(text_contents) - 1] == '\n') {
			text_contents[strlen(text_contents) - 1] = '\0';
		}
		puts(text_contents);	
		// ������ �ҹ��ڿ� �빮�ڸ� ���� ABC_num�� �� ������ ����
		for (int i = 0; i < 21; i++) {
			for (int k = 0; k < SIZE; k++) {
				if ((text_contents[k] == abc[i]) || (text_contents[k] == ABC[i]))
					ABC_num[i] = ABC_num[i] + 1;
			}
		}
	}
	// ������ �������� ������ ���
	for (int i = 0; i < 21; i++) {
		printf("%3c:%2d", ABC[i], ABC_num[i]);
		if ((i % 10 == 0) && (i != 0))
			printf("\n");
	}
	fclose(fp);
}