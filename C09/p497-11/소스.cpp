#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>// strlen()함수
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

		// 2글자 이하는 다시 입력
		if (strlen(word) < 3) {
			printf("too short, try again\n");
			goto start;
		}
		/* 이전 단어의 끝 문자와 입력받은 단어의 첫 문자가 틀리면
		성공 횟수 출력 후 프로그램을 종료*/
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