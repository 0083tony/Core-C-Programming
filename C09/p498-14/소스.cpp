#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>// strlen()�Լ�
#define MAX 256
int main(void) {
	char ID[MAX] = "";
	size_t a;

start:
	printf("ID? ");
	scanf("%s", ID);
	a = strlen(ID);

	if (a < 8) {
		printf("ID�� 8�� �̻��̾�� �մϴ�.\n");
		goto start;
	}
	if (ID[0] >= '0' && ID[0] <= '9') {
		printf("ID�� �����ڷ� �����ؾ� �մϴ�.\n");
		goto start;
	}
	for (size_t i = 0; i < a; i++) {
		if (ID[i] >= '!' && ID[i] <= '/' || ID[i] >= ';' && ID[i] <= '@') {
			printf("ID�� �����ڿ� ���ڷθ� �����Ǿ�� �մϴ�.\n");
			goto start;
		}
	}
	printf("%s�� ID�� ����� �� �ֽ��ϴ�.\n", ID);

	return 0;
}