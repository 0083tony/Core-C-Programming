#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(void) {
	// ȣ���� ������ �ٸ� ������ �Է¹ޱ� ���� srand�� �ʱ�ȭ
	srand((unsigned)time(NULL));
	int height, width;
	int add1 = 0;
	int add2 = 0;
	printf("�迭�� �� ũ��? ");
	scanf("%d", &height);
	printf("�迭�� �� ũ��? ");
	scanf("%d", &width);

	int** AB = NULL;
	// 2�� malloc()�� ȣ���ϸ� 2���� ���� �޸𸮸� �Ҵ� ���� �� �ִ�.
	AB = (int**)malloc(sizeof(int*) * height);
	for (int i = 0; i < height; i++) {
		AB[i] = (int*)malloc(sizeof(int) * width);
	}
	for (int i = 0; i < height; i++) {
		for (int k = 0; k < width; k++) {
			AB[i][k] = rand() % 10;
			// ���� ���� ����
			add1 = AB[i][k] + add1;
			printf("%5d", AB[i][k]);
		}
		printf("  ==> %3d\n", add1);
	}
	printf("--------------------------------------------------\n");
	for (int i = 0; i < width; i++) {
		for (int k = 0; k < height; k++) {
			// ���� ���� ����
			add2 = AB[k][i] + add2;
		}
		printf("%5d", add2);
	}
	// ���� �޸� �Ҵ� ����
	free(AB);
}