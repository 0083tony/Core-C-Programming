#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //strlen()�Լ�
#define SIZE 100
int main(void) {
	char text_contents[SIZE];
	int key, k = 0;
	FILE* fp;;
	fp = fopen("cipher.txt", "w");
	printf("��ȣ Ű? ");
	scanf("%d", &key);
	getchar();
	printf("��ȣȭ�� �ؽ�Ʈ?\n");
	// %[^\n]s �� ����� \n�� ������ ��� ���ڸ� �Է¹���
	scanf("%[^\n]s", text_contents);
	
	// text_contents[i]�� A(ASCII 65)�� ���� A�� 0���� ����� ������ ��� key�� ����ŭ ���Ѵ�.
	for (size_t i = 0; i < strlen(text_contents); i++) {
		if (text_contents[i] >= 'A' && text_contents[i] <= 'Z') {
			text_contents[i] -= 'A';
			if (text_contents[i] + key < 0) {
				text_contents[i] += 26;
			}
			// ���ĺ��� 26���ڷ� �̷�����ֱ⿡ 26���� ū���� �����°�
			text_contents[i] = (text_contents[i] + key) % 26;
			// ���������� A�� ���� ASCII�ڵ带 �����.
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
	// ���Ͽ� ��ȣȭ�� �ؽ�Ʈ�� �����ϰ� ������ ����.
	fputs(text_contents, fp);
	fclose(fp);
}