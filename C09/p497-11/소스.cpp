#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>// strlen()�Լ�
#define MAX 256
int main(void) {
	char word[MAX] = "";
	char check_word;
	int count = 0;

	printf("word? ");
	scanf("%s", word);

	check_word = word[strlen(word) - 1];
	count++;

	for (;;) {
	start:
		printf("word? ");
		scanf("%s", word);

		// 2���� ���ϴ� �ٽ� �Է�
		if (strlen(word) < 3) {
			printf("too short, try again\n");
			goto start;
		}
		/* ���� �ܾ��� �� ���ڿ� �Է¹��� �ܾ��� ù ���ڰ� Ʋ����
		���� Ƚ�� ��� �� ���α׷��� ����*/
		else if (check_word != word[0]) {
			printf("WRONG WORD!!! YOU FAILED!!\n");
			printf("count: %d", count);
			break;
		}
		check_word = word[strlen(word) - 1];
		count++;
	}
	return 0;
}