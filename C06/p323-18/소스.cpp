#include <stdio.h>
#include <stdlib.h> // rand(),srand() 함수
#include <time.h> // time() 함수
void divisors(int a) {
	int count = 0;

	printf("%d의 약수: ", a);

	for (int i = 1; i <= a; i++) {
		// 난수 a를 1부터 a까지 나눈 나머지가 0 == count++
		if (a % i == 0) {
			// count에 약수의 개수 저장
			count++;
			printf("%3d ", i);
		}
	}
	printf("==> 총 %d개\n", count);
}
int main(void) {
	srand(time(NULL)); // 항상 다른 난수를 얻을 수 있다.
	int i;
	
	for (i = 0; i < 3; i++) {
		// 0~999 사이의 난수
		int a = rand() % 1000;
		divisors(a);
	}
	return 0;
}