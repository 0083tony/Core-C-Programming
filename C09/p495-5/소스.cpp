#include<stdio.h>
#define SIZE 255 // SIZE�� 255�� ����
int strcmp_ic(char* a, char* b) {

	// �빮�ڸ� ��� �ҹ��ڷ� ������ ��
	while (*a >= 'A' && *a <= 'Z') {
		// ASCII A+32 == a
		*a = *a + 32;
	}
	while (*b >= 'A' && *b <= 'Z') {
		*b = *b + 32;
	}
	//������ 1 �ٸ��� -1 ����
	if (*a == *b) {
		return 1;
	}
	else
		return -1;
}
int main(void) {
	char a[SIZE] = "";
	char b[SIZE] = "";

	printf("ù ��° ���ڿ�? ");
	gets_s(a, sizeof(a));
	printf("�� ��° ���ڿ�? ");
	gets_s(b, sizeof(b));

	if (strcmp_ic(a, b) < 0) {
		printf("%s�� %s�� �ٸ��ϴ�.\n", a, b);
	}
	else
		printf("%s�� %s�� �����ϴ�.\n", a, b);

	return 0;
}