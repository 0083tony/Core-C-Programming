#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ũ�Ⱑ 10�� �迭�� N�̶�� ���� ä���.
#define FILL_ARRAY(arr,size,value) for(int i=0;i<size;i++){arr[i]=value;}

// �迭�� ����� ���� ����Ѵ�. �迭�� ũ�� 10��ŭ �ݺ�
#define PRINT_ARRAY(arr,size) printf("[N]"); for(int i=0;i<size;i++){printf("%3d",arr[i]);}
int main(void) {
	int N, arr[10];

	printf("���� �迭�� �ʱⰪ? ");
	scanf("%d", &N);
	FILL_ARRAY(arr, 10, N);
	PRINT_ARRAY(arr, 10);
	return 0;
}