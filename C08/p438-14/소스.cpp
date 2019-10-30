#include<stdio.h>
#include<stdlib.h> // srand(), rand()함수
#include<time.h> // time()함수
void rand_array(int* arr) {
	for (int i = 0; i < 10; i++) {
		// 크기가 10인 배열을 0~99 사이의 난수로 채움
		arr[i] = rand() % 100;
	}
}
int main(void) {
	srand(time(NULL)); // 항상 다른 난수를 얻을 수 있다
	int arr[10];
	int count = rand() % 10; // count = 0~9 사이의 난수

	printf("count = %d\n", count);

	// count번 만큼 반복
	for (int i = 0; i < count; i++) {
		// arr를 매개변수로 전달
		rand_array(arr);
		// arr의 원소를 출력
		for (int j = 0; j < 10; j++) {
			printf("%4d", arr[j]);
		}
		printf("\n");
	}

	return 0;
}