#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void  extend_array(int** AB, int* size) {
	int new_size = *size * 2;
	// ������ AB���� �迭�� 2�� ū new_AB
	int* new_AB = (int*)malloc(sizeof(int) * new_size);
	for (int i = 0; i < *size; i++) {
		// AB�� ���� new_AB�� ����
		new_AB[i] = (*AB)[i];
	}
	// AB �ʱ�ȭ, ���� ������ 2�� ū size�� main�Լ��� ���� 
	free(*AB);
	*AB = new_AB;
	*size = (*size) * 2;
}
int main(void) {
	int* AB = NULL;
	int size = 2;
	int i = 0;
	int add = 0;
	AB = (int*)malloc(sizeof(int) * size);
	printf("�迭�� �߰��� ����? ");
	for (;;) {
		scanf("%d", &AB[i]);
		// -1 �� �Է��ϸ� �迭 �߰��� ����
		if (AB[i] == -1)
			break;
		// i+1 �� size�� ������ extend_array �Լ��� ȣ��
		if (i + 1 == size)
			extend_array(&AB, &size);
		i++;
	}
	printf("�迭�� �ִ� ũ��: %d, ���� ����� ���� ��: %d\n", size, i);
	printf("�迭: ");
	for (int k = 0; k < i; k++) {
		// AB�� ��Ҹ� ����ϰ� �� ���� ���� add�� ����
		printf("%3d", AB[k]);
		add = AB[k] + add;
	}
	printf("\n�迭�� �հ�: %d", add);
}