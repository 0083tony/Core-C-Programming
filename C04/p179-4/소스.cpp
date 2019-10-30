#include<stdio.h>
int main(void) {
	float a, b;

	printf("용매(g)? ");
	scanf_s("%f", &a);
	printf("용질(g)? ");
	scanf_s("%f", &b);

	// %를 출력하기 위해서는 %%를 사용해야한다.
	printf("농도: %.2f %%", b / (a + b) * 100);
	
	return 0;
}