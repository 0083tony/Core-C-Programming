#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ũ�Ⱑ 10�� �迭�� N�̶�� ���� ä���.
#define FILL_ARRAY(arr,size,value) for(int i=0;i<size;i++){arr[i]=value;}

// �迭�� �̸��� Xrr�̸� �Ǽ��� ��� Yrr�̸� ���ڷ� ���
#define PRINT_ARRAY(arr,size) if (#arr=="Xrr"){printf("[N]"); for(int i=0;i<size;i++){printf(" %.1f ",arr[i]);}}if (#arr=="Yrr"){printf("[N]"); for(int i=0;i<size;i++){printf("%2c ",arr[i]);}}

int main(void) {
	float Xrr[10];
	char Yrr[10];
	float X;
	char Y;

	printf("�Ǽ� �迭�� �ʱⰪ? ");
	scanf("%f", &X);
	FILL_ARRAY(Xrr, 10, X);
	PRINT_ARRAY(Xrr, 10);

	getchar();
	printf("\n���� �迭�� �ʱⰪ? ");
	scanf("%c", &Y);
	FILL_ARRAY(Yrr, 10, Y);
	PRINT_ARRAY(Yrr, 10);
	return 0;
}