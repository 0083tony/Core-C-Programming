#include<stdio.h>
#include<string.h>// strlen()함수
#include<ctype.h>// isupper(),toupper()함수
int main(void) {
	char str[256];
	int size;

	printf("문자열? ");
	scanf_s("%[^\n]", str, 256);

	// 문자열의 크기
	size = strlen(str);

	// 대문자 소문자 변환
	for (int i = 0; i < size; i++) {
		if (isupper(str[i])) {
			str[i] = tolower(str[i]);
		}
		else if (islower(str[i])) {
			str[i] = toupper(str[i]);
		}
	}

	printf("변환 후: %s", str);

	return 0;
}