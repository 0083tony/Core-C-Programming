#include<stdio.h>
#include<string.h>// strlen()�Լ�
#include<ctype.h>// isupper(),toupper()�Լ�
int main(void) {
	char str[256];
	int size;

	printf("���ڿ�? ");
	scanf_s("%[^\n]", str, 256);

	// ���ڿ��� ũ��
	size = strlen(str);

	// �빮�� �ҹ��� ��ȯ
	for (int i = 0; i < size; i++) {
		if (isupper(str[i])) {
			str[i] = tolower(str[i]);
		}
		else if (islower(str[i])) {
			str[i] = toupper(str[i]);
		}
	}

	printf("��ȯ ��: %s", str);

	return 0;
}