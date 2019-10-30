#include<stdio.h>
#include<math.h> // pow()함수
int round_pos(int n) {
	int a = 0;

	a = pow(10, n); // 10의 n승
	// 1의 자리에서 반올림 알고리즘 == (X + 5) / 10 * 10
	return (((1357 + (5 * a)) / (10 * a)) * (10 * a));
}
int main(void) {

	for (int n = 0; n < 3; n++)
		printf("%d번째 자리에서 반올림한 결과: %d\n", n, round_pos(n));
	
	return 0;
}