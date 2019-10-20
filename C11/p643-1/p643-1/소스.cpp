#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int count_digits(int a) {
	if (a == 0)
		return 0;
	else
		return count_digits(a / 10) + 1;
}
int main(void) {
	int a;
	for (;;) {
		printf("Á¤¼ö? ");
		scanf("%d", &a);
		if (a == 0)
			break;
		printf("count of dihits: %d\n", count_digits(a));
		getchar();
	}
}