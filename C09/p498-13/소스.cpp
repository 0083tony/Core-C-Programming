#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>// srand(),rand()�Լ�
#include<time.h>// time()�Լ�
#define MAX 256
int main(void) {
	srand(time(NULL));
	char tip[4][MAX] = {
		"Live Photo�� ��ƿ �̹����� ������ �� �ֽ��ϴ�.",
		"��ũ�� Ÿ�ӿ��� iPhone�� �Ϸ� ��� �ð��� Ȯ���� �� �ֽ��ϴ�.",
		"C���� ��ü ���⵵ ���ϴ� �ٺ�",
		"���񱺰��� �ȴ�..."
	};

	printf("����Ű�� ���� ������ ��� ���� �����ݴϴ�.\n");

	while (getchar() != EOF) {
		int a = rand() % 4;
		printf("%s\n", tip[a]);
	}
	return 0;
}