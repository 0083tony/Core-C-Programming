#include<stdio.h>
int main(void) {
	double arr[10] = { 0.1,2,3.4,5.2,4.5,7.8,9.7,1.4,6.6,7.2 };
	double* p;
	double avg = 0;

	printf("배열: ");
	// 배열의 원소를 출력하고 평균값을 avg에 저장
	for (int i = 0; i < 10; i++) {
		printf("%.2f  ", arr[i]);
		p = &arr[i];
		avg = *p + avg;
	}
	printf("\n평균: %f", avg / 10);

	return 0;
}