#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long fibo[1000] = { 0,1,1, };
long long fibonacci(int num) {
	if (num == 1 || num == 2)
		return 1;
	else if (fibo[num])
		return fibo[num];
	else
		return fibo[num] = fibonacci(num - 1) + fibonacci(num - 2);
}
int main(void) {
	int n;

	printf("피보나치 수를 입력하세요 ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		printf("%lld ", fibonacci(i));
	}
}