#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 크기가 10인 배열에 N이라는 값을 채운다.
#define FILL_ARRAY(arr,size,value) for(int i=0;i<size;i++){arr[i]=value;}

// 배열의 이름이 Xrr이면 실수로 출력 Yrr이면 문자로 출력
#define PRINT_ARRAY(arr,size) if (#arr=="Xrr"){printf("[N]"); for(int i=0;i<size;i++){printf(" %.1f ",arr[i]);}}if (#arr=="Yrr"){printf("[N]"); for(int i=0;i<size;i++){printf("%2c ",arr[i]);}}

int main(void) {
	float Xrr[10];
	char Yrr[10];
	float X;
	char Y;

	printf("실수 배열의 초기값? ");
	scanf("%f", &X);
	FILL_ARRAY(Xrr, 10, X);
	PRINT_ARRAY(Xrr, 10);

	getchar();
	printf("\n문자 배열의 초기값? ");
	scanf("%c", &Y);
	FILL_ARRAY(Yrr, 10, Y);
	PRINT_ARRAY(Yrr, 10);
	return 0;
}