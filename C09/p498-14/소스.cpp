#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>// strlen()함수
#define MAX 256
int main(void) {
	char ID[MAX] = "";
	size_t a;

start:
	printf("ID? ");
	scanf("%s", ID);
	a = strlen(ID);

	if (a < 8) {
		printf("ID는 8자 이상이어야 합니다.\n");
		goto start;
	}
	if (ID[0] >= '0' && ID[0] <= '9') {
		printf("ID는 영문자로 시작해야 합니다.\n");
		goto start;
	}
	for (size_t i = 0; i < a; i++) {
		if (ID[i] >= '!' && ID[i] <= '/' || ID[i] >= ';' && ID[i] <= '@') {
			printf("ID는 영문자와 숫자로만 구성되어야 합니다.\n");
			goto start;
		}
	}
	printf("%s는 ID로 사용할 수 있습니다.\n", ID);

	return 0;
}