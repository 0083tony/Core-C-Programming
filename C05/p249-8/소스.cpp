#include<stdio.h>
int main(void) {
	int a, b;
	char c;

	printf("비트 연산식? ");
	scanf_s("%i %c %i", &a, &c, 20, &b);

	// 입력받은 비트 연산식을 수행
	if (c == '&') {
		printf("%X & %X = %X", a, b, a & b);
	}
	else if (c == '|') {
		printf("%X | %X = %X", a, b, a | b);
	}
	else if (c == '^') {
		printf("%X ^ %X = %X", a, b, a ^ b);
	}
	else {
		printf("올바른 식을 입력해 주세요.\n");
	}

	return 0;
}