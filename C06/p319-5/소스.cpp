#include<stdio.h>
int is_even(int a) {
	int even = 0;

	// 2로 나눈 나머지가 0 == 짝수
	if (a % 2 == 0) {
		even++;
	}
	return even;
}
int is_odd(int a) {
	int odd = 0;

	// 2로 나눈 나머지가 1 == 홀수
	if (a % 2 == 1) {
		odd++;
	}
	return odd;
}
int main(void) {
	int a;
	int odd = 0;
	int even = 0;

	printf("정수를 빈칸으로 구분해서 입력하세요.(마지막에 0 입력)\n");

	// 무한루프 for(;;) == while(1)
	for (;;) {
		scanf_s("%d", &a);

		if (is_odd(a) == 1) {
			odd++;
		}
		else {
			even++;
		}
		// 0을 입력하면 짝수와 홀수의 갯수를 출력하고 무한루프 탈출
		if (a == 0) {
			// 마지막에 입력되는 0은 짝수로 입력된다 그러므로 even - 1
			printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개입니다.", even - 1, odd);
			break;
		}
	}
	return 0;
}