#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int arr[10][10];
int power(int num, int i) {
	if (i == 0)
		return 1;
	else
		return arr[num][i] = num * power(num, i - 1);
}
int main(void) {
	int num;
	printf("นุ(base)? ");
	scanf("%d", &num);
	for (int i = 0; i < 10; i++) {
		printf("%d ^ %d = %d\n", num, i, power(num, i));
	}
}