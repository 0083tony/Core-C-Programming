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
	printf("피보나치 수\n");

	for (int i = 1; i <= 20; i++) {
		printf("%d ", fibonacci(i));
	}
	return 0;
}