#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sum_digits(int num, int a) {
	if (num == 0)
		return 0;
	else
		return num % a + sum_digits((num - num % a) / 10, a);
}
int main(void) {
	int n, a = 10;
	for (;;) {
		printf("Á¤¼ö? ");
		scanf_s("%d", &n);

		if (n == 0)
			break;

		printf("sum of digits: %d\n", sum_digits(n, a));
		getchar();
	}
	return 0;
}