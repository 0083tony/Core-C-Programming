#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 크기가 10인 배열에 N이라는 값을 채운다.
#define FILL_ARRAY(arr,size,value) for(int i=0;i<size;i++){arr[i]=value;}

// 배열에 저장된 값을 출력한다. 배열의 크기 10만큼 반복
#define PRINT_ARRAY(arr,size) printf("[N]"); for(int i=0;i<size;i++){printf("%3d",arr[i]);}
int main(void) {
	int N, arr[10];

	printf("정수 배열의 초기값? ");
	scanf("%d", &N);
	FILL_ARRAY(arr, 10, N);
	PRINT_ARRAY(arr, 10);
	return 0;
}