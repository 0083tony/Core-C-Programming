#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* join_string(char* A, char* B) {
	char* AB = NULL;
	AB = (char*)malloc(sizeof(char) * 100);
	if (AB == NULL)
		return 0;
	AB = strcat(A, B);
	return AB;
}
int main(void) {
	char A[100] = { "first string for join string function " };
	char B[100] = { "second string for join string function " };

	printf("첫 번째 문자열? %s\n", A);
	printf("두 번째 문자열? %s\n", B);
	printf("%s", join_string(A, B));
}