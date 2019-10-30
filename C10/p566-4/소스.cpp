#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct AA {
	int year = 0;
	int month = 0;
	int date = 0;
};
void print_date(int year, int month, int date) {
	printf("%d / %d / %d\n", year, month, date);
}
int main(void) {
	struct AA a;

	printf("¿¬? ");
	scanf("%d", &a.year);
	printf("¿ù? ");
	scanf("%d", &a.month);
	printf("ÀÏ? ");
	scanf("%d", &a.date);

	print_date(a.year, a.month, a.date);
	return 0;
}