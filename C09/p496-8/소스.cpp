#include <stdio.h>
#include <string.h>// strlen()�Լ�
#define MAX 256
int main(void) {
	char pass[MAX] = "";
	int key = 0;
	size_t size;

	for (;;) {
		printf("���ڿ�? ");
		scanf_s("%[^\n]s", &pass, MAX);

		// .�Է½� ���α׷� ����
		if (*pass == '.')
			break;

		printf("��ȣ Ű(����)? ");
		scanf_s("%d", &key);

		getchar(); // ���� ���

		// ���ڿ��� ũ�⸦ ����
		size = strlen(pass);

		// ���ڿ��� key�� ���� ��ȣȭ
		for (size_t i = 0; i < size; i++) {
			if (pass[i] != ' ') {
				pass[i] = pass[i] + key;
			}
		}
		printf("��ȣȭ�� ���ڿ�: %s\n", pass);
	}
	return 0;
}