#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(void) {
	// ȣ���� ������ �ٸ� ������ �Է¹ޱ� ���� srand�� �ʱ�ȭ
	srand((unsigned)time(NULL));
	int height, width;
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
			printf("%d ", AB[i][k]);
		}
		printf("\n");
	}
	// ���� �޸� �Ҵ� ����
	free(AB);
}