#include<stdio.h>
#include<string.h>// strlen()함수
void reverse_string(char* str, int n) {
	char temp;

	for (int i = 0; i < n / 2; i++) {
		temp = str[i];
		str[i] = str[(n - 1) - i];
		str[(n - 1) - i] = temp;
	}
}
int main(void) {
	char str[256];
	int size;

	printf("문자열? ");
	scanf_s("%[^\n]", str, 256);

	size = strlen(str);

	reverse_string(str, size);
	printf("변환 후: %s", str);

	return 0;
}