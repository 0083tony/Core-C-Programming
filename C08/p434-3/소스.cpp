#include<stdio.h>
int main(void) {
	int arr[10] = { 44,32,65,23,45,76,77,89,23,45 };
	int* p;
	p = &arr[0];

	printf("배열: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", *p);
		p++;
	}
	printf("\n역순: ");
	for (int i = 0; i < 10; i++) {
		p--;
		printf("%d ", *p);
	}
	return 0;
}