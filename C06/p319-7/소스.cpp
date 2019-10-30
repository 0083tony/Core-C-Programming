#include<stdio.h>
int is_prime(int n) {
	int i, prime = 0;

	for (int a = 2; a <= n; a++) {
		i = 0; // 소수 검사값
		for (int b = 1; b <= a; b++) {
			if (a % b == 0)
				i++;
		}
		if (i == 2) {
			prime++;
			printf("%5d", a);
			// 소수를 10개 출력할 때마다 줄 바꿈
			if (prime != 0 && prime % 10 == 0)
				printf("\n");
		}
	}
	// 소수의 개수 prime을 리턴
	return prime;
}
int main(void) {
	int n;

	printf("1~N사이의 소수를 구합니다. N은? ");
	scanf_s("%d", &n);

	printf("\n소수는 모두 %d개 입니다.", is_prime(n));

	return 0;
}