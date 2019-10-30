#include<stdio.h>
void arith_seq(int, int);
int main(void) {
	int arr[10];
	int a, b, * p;

	printf("첫번째 항? ");
	scanf_s("%d", &a);
	printf("공차? ");
	scanf_s("%d", &b);

	// arr[0] = 첫번째 항, 포인터 p = arr[0]
	arr[0] = a;
	p = &arr[0];

	// 포인터 p, 공차 b를 매개변수로 함수에 전달
	arith_seq(*p, b);
	
	return 0;
}
void arith_seq(int p, int num) {
	printf("등차수열: ");

	// 등차수열 연산, 출력
	for (int i = 0; i < 10; i++) {
		printf("%d ", p);
		p = p + num;
	}
}