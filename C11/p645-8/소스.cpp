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

	printf("�迭�� 0���� 1�� Ŀ���� ������ ä�� ��:\n");

	for (int i = 0; i < 10; i++) {
		func = increment_it;
		num = Function(i, func);
		printf("%d ", num);
	}

	printf("\n�迭�� ���� ���Һ��� 1��ŭ ū ������ ä�� ��:\n");

	for (int i = 0; i < 10; i++) {
		func = increase_from_0;
		num = Function(i, func);
		printf("%d ", num);
	}

	printf("\n�迭�� ���� ������ �������� ä�� ��:\n");

	for (int i = 1; i <= 10; i++) {
		func = squared;
		num = Function(i, func);
		printf("%d ", num);
	}

	printf("\n�迭�� 0���� ä�� ��:\n");

	for (int i = 0; i < 10; i++) {
		func = fill_0;
		num = Function(i, func);
		printf("%d ", num);
	}
	return 0;
}