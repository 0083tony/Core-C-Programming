#include<stdio.h>
#include<stdlib.h> // srand(), rand() 함수
#include<time.h> // time() 함수
int main(void) {
	unsigned char arr[16], brr[16];
	srand(time(NULL));

	// 0~255 사이의 난수를 배열에 채움
	for (int i = 0; i < 16; i++) {
		arr[i] = rand() % 256;
		brr[i] = rand() % 256;
	}
	printf("image1: ");
	for (int i = 0; i < 16; i++) {
		printf("%4X", arr[i]);
	}
	printf("\nimage2: ");
	for (int i = 0; i < 16; i++) {
		printf("%4X", brr[i]);
	}
	// or 연산 후 출력
	printf("\nimage3: ");
	for (int i = 0; i < 16; i++) {
		printf("%4X", arr[i] | brr[i]);
	}
	return 0;
}