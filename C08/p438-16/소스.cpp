#include<stdio.h>
#include<stdlib.h>// srand(), rand()함수
#include<time.h>// time() 함수
#define ASCENDING 0 
#define DESENDING 1
void sort_array_with_order(int* arr) {
	int temp;

	// 0이 아니면 #if ~ #endif 까지 컴파일 무시
#if(ASCENDING == 0)
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9; j++) {
			/* 대소비교를 통해 오름차순으로 정렬
			ex) arr[1]가 arr[2]보다 크면 temp에 arr[1]을 저장하고 arr[1]에 arr[2]를 저장한다
			그리고 arr[2]에 미리 저장해둔 temp의 값(초기의 arr[1])을 저장함*/
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("\n오름차순 정렬 후:");

	for (int i = 0; i < 10; i++) {
		printf("%3d", arr[i]);
	}
#endif

	// 1이 아니면 #if ~ #endif 까지 컴파일 무시
#if(DESENDING == 1)
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9; j++) {
			// 대소비교를 통해 내림차순으로 정렬
			if (arr[j] < arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("\n내림차순 정렬 후:");

	for (int i = 0; i < 10; i++) {
		printf("%3d", arr[i]);
	}
#endif
}
int main(void) {
	srand(time(NULL));// 항상 다른 결과를 얻음
	int arr[10];

	printf("정렬 전:");

	for (int i = 0; i < 10; i++) {
		// 0~99 사이의 난수를 arr[i]에 저장
		arr[i] = rand() % 100;
		printf("%3d", arr[i]);
	}

	sort_array_with_order(arr); //배열을 매개변수로 전달

	return 0;
}