#include<stdio.h>
#include<ctype.h>// isspace() �Լ�
void remove_space(char* str) {
	char* pstr = str;

	while (*str != 0) {
		// ���鹮�ڸ� �����ϰ� �迭�� ����
		if (isspace(*str) == 0) {
			if (pstr != str)
				* pstr = *str;
			pstr++;
		}
		str++;
	}
	*pstr = 0;
}
int main(void) {
	char str[256];

	printf("���ڿ�? ");
	scanf_s("%[^\n]s", str, 256);
	remove_space(str);
	printf("���� ���� ������: %s", str);

	return 0;
}