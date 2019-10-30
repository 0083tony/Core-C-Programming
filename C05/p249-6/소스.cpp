#include<stdio.h>
int main(void) {
	float a;
	char b;

	printf("넓이? ");
	scanf_s("%f %c", &a, &b, 20);

	if (b == 'm') {
		printf("%.2f 제곱미터 == %.2f 평 ", a, 0.3025 * a);
	}
	else if (b == 'p') {
		printf("%.2f 평 ==> %.2f 제곱미터 ", a, 3.305785 * a);
	}
	else {
		printf("입력된 단위가 올바르지 않습니다.\n");
	}

	return 0;
}