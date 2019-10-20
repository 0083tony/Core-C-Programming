#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fibonacci(int num) {
	if (num == 0)
		return 0;
	else if (num == 1)
		return 1;
	else return fibonacci(num - 1) + fibonacci(num - 2);
}
int main(void) {
	int n;

	printf("피보나치 수를 입력하세요 ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		printf("%d ", fibonacci(i));
	}
}