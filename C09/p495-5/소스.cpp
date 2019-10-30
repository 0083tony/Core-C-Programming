#include<stdio.h>
#define SIZE 255 // SIZE를 255로 정의
int strcmp_ic(char* a, char* b) {

	// 대문자를 모두 소문자로 변경해 비교
	while (*a >= 'A' && *a <= 'Z') {
		// ASCII A+32 == a
		*a = *a + 32;
	}
	while (*b >= 'A' && *b <= 'Z') {
		*b = *b + 32;
	}
	//같으면 1 다르면 -1 리턴
	if (*a == *b) {
		return 1;
	}
	else
		return -1;
}
int main(void) {
	char a[SIZE] = "";
	char b[SIZE] = "";

	printf("첫 번째 문자열? ");
	gets_s(a, sizeof(a));
	printf("두 번째 문자열? ");
	gets_s(b, sizeof(b));

	if (strcmp_ic(a, b) < 0) {
		printf("%s와 %s가 다릅니다.\n", a, b);
	}
	else
		printf("%s와 %s가 같습니다.\n", a, b);

	return 0;
}