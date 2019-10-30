#include<stdio.h>
int main(void) {
	float a;
	char b;

	printf("온도? ");
	scanf_s("%f %c", &a, &b, 20);

	// ||(or)을 사용하면 c,C f,F 대소문자 구분없이 입력받을 수 있다.
	if (b == 'c' || b == 'C') {
		printf("%.2f C ==> %.2f F ", a, a * 9 / 5 + 32);
	}
	if (b == 'f' || b == 'F') {
		printf("%.2f F ==> %.2f C ", a, (a - 32) * 5 / 9);
	}

	return 0;
}