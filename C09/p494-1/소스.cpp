#include<stdio.h>
#include<string.h>// strlen()�Լ�
#include<ctype.h>// isspace()�Լ�
int main(void) {
	char str[256];
	int count = 0;

	printf("���ڿ�? ");
	scanf_s("%[^\n]", str, 256);

	// ���ڿ��� ���̸� n�� ����
	int n = strlen(str);

	for (int i = 0; i < n; i++) {
		// ���鹮�ڸ� ã���� ���� count++
		if (isspace(str[i]))
			count++;
	}

	printf("���� ������ ����: %d", count);

	return 0;
}