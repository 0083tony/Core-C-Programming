#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void* a, const void* b) {
	return (strcmp((char*)a, (char*)b));
}
int* merge_array(int* A, int* B, int* AB) {
	memcpy(AB, A, 40);
	memcpy(AB + 5, B, 40); // A�迭�� ũ���� 5�� ���� �� ������ �迭�� B���� ����
	qsort((void*)AB, 40, sizeof(AB[0]), compare); // �������� ����
	return AB;
}
int main(void) {
	int A[5] = { 1,3,5,7,9 };
	int B[6] = { 2,4,6,8,10,12 };
	int* AB = NULL;
	AB = (int*)malloc(sizeof(int) * 40);

	printf("arr1: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", A[i]);
	}
	printf("\narr2: ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", B[i]);
	}
	merge_array(A, B, AB);
	printf("\nmerged array: ");
	for (int i = 0; i < 11; i++) {
		printf("%d ", AB[i]);
	}
	free(AB); // ���� �޸� �Ҵ� ����

	return 0;
}