#include <stdio.h>
typedef int (*fill_array)(int);
int increment_it(int num) {
	return num;
}
int increase_from_0(int num) {
	return num + 1;
}
int squared(int num) {
	return num * num;
}
int fill_0(int num) {
	return num = 0;
}
int Function(int num, fill_array func) {
	return func(num);
}
int main(void) {
	fill_array func = NULL;
	int num;

	printf("배열을 0부터 1씩 커지는 값으로 채울 때:\n");
	for (int i = 0; i < 10; i++) {
		func = increment_it;
		num = Function(i, func);
		printf("%d ", num);
	}
	printf("\n배열을 현재 원소보다 1만큼 큰 값으로 채울 때:\n");
	for (int i = 0; i < 10; i++) {
		func = increase_from_0;
		num = Function(i, func);
		printf("%d ", num);
	}
	printf("\n배열을 현재 원소의 제곱으로 채울 때:\n");
	for (int i = 1; i <= 10; i++) {
		func = squared;
		num = Function(i, func);
		printf("%d ", num);
	}
	printf("\n배열을 0으로 채울 때:\n");
	for (int i = 0; i < 10; i++) {
		func = fill_0;
		num = Function(i, func);
		printf("%d ", num);
	}
}