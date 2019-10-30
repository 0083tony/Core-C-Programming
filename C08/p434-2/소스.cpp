#include<stdio.h>
int main(void) {
	double arr[10] = { 0.1,2,3.4,5.2,4.5,7.8,9.7,1.4,6.6,7.2 };
	double* p;

	for (int i = 0; i < 10; i++) {
		p = &arr[i];
		printf("%6.2f", *p);
	}
	return 0;
}