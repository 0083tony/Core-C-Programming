#include <stdio.h>
int main()
{
	char name[20];
	float x;

	printf("이름: ");
	// #define _CRT_SECURE_NO_WARNINGS 사용하면 _s를 붙이지 않아도 된다.
	scanf_s("%s", name, 20);

	printf("학점: ");
	scanf_s("%f", &x);


	printf("%s의 학점은 %f입니다.\n", name, x);

	return 0;
}