#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100
int main(void) {
	char text_filename[SIZE];
	char text_contents[SIZE];
	int key;
	FILE* fp;
	// ���� �̸��� �Է¹ް� �ҷ���
	printf("��ȣȭ�� ����? ");
	gets_s(text_filename, SIZE);
	fp = fopen(text_filename, "r");
	// ������ ã�� ���ϸ� Error! ��� �� ����
	if (fp == NULL) {
		printf("Error!\n");
		return 1;
	}
	// ��ȣ Ű�� �Է¹��� 
	printf("��ȣ Ű? ");
	scanf("%d", &key);
	key = -key;
	// text_contents[i]�� A(ASCII 65)�� ���� A�� 0���� ����� ������ ��� key�� ����ŭ ����.
	while (!feof(fp)) {
		fgets(text_contents, SIZE, fp);
		for (size_t i = 0; i < strlen(text_contents); i++) {
			if (text_contents[i] >= 'A' && text_contents[i] <= 'Z') {
				text_contents[i] -= 'A';
				if (text_contents[i] + key < 0) {
					text_contents[i] += 26;
				}
				// ���ĺ��� 26���ڷ� �̷�����ֱ⿡ 26���� ū���� ����
				text_contents[i] = (text_contents[i] + key) % 26;
				text_contents[i] += 'A';
			}
			if (text_contents[i] >= 'a' && text_contents[i] <= 'z') {
				text_contents[i] -= 'a';
				if (text_contents[i] + key < 0) {
					text_contents[i] += 26;
				}
				text_contents[i] = (text_contents[i] + key) % 26;
				text_contents[i] += 'a';
			}
		}
	}
	// ��ȣȭ�� ��ȣ�� ����ϰ� ������ ����
	printf("%s\n", text_contents);
	fclose(fp);
}