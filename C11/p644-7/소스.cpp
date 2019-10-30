#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fibonacci(int num) {
	if (num == 0)
		return 0;
	else if (num == 1)
		return 1;
	else return fibonacci(num - 1) + fibonacci(num - 2);
}
int power(int num, int i) {
	if (i == 0)
		return 1;
	else
		return num * power(num, i - 1);
}
int main(void) {
	int (*fibo)(int);
	int (*po)(int, int);
	int num;
	int result;

	fibo = fibonacci;
	po = power;

	printf("밑(base)? ");
	scanf("%d", &num);

	for (int i = 0; i < 10; i++) {
		result = po(num, i);
		printf("%d ^ %d = %d\n", num, i, result);
	}

	printf("\n\n");
	printf("피보나치 수를 입력하세요 ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		result = fibo(i);
		printf("%d ", result);
	}
	return 0;
}