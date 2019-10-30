#include<stdio.h>
#include<string.h>// strlen()함수
#include<ctype.h>// isspace()함수
int main(void) {
	char str[256];
	int count = 0;

	printf("문자열? ");
	scanf_s("%[^\n]", str, 256);

	// 문자열의 길이를 n에 저장
	int n = strlen(str);

	for (int i = 0; i < n; i++) {
		// 공백문자를 찾을때 마다 count++
		if (isspace(str[i]))
			count++;
	}

	printf("공백 문자의 개수: %d", count);

	return 0;
}