#include<stdio.h>
#include<stdlib.h> // srand(), rand() 함수
#include <time.h> // time() 함수
void suf(int* arr) {
	srand(time(NULL)); 
	// 오버플로우 오류로 int가 아닌 size_t 사용
	for (size_t i = 0; i < 10; i++) {
		// 임의의 순서로 셔플
		size_t j = i + rand() / (RAND_MAX / (10 - i) + 1);
		int temp = arr[j];
		arr[j] = arr[i];
		arr[i] = temp;
		printf("%4d", temp);
	}
}
int main(void) {
	int arr[10] = { 12,64,80,42,67,9,8,7,56,48 };

	printf("셔플 전: ");
	for (int i = 0; i < 10; i++) {
		printf("%4d", arr[i]);
	}
	printf("\n셔플 후: ");
	suf(arr);
	
	return 0;
}