#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //malloc()�Լ�, srand()�Լ�, atoi()�Լ�
#include <time.h> // time()�Լ�
#include <string.h> // strcat()�Լ�, strtok()�Լ�
#define SIZE 50
int main(void) {
	srand(time(NULL));
	int num;
	int* N = NULL;
	char name[SIZE];
	char ext[2][SIZE] = { 
		{".txt"},
		{".dat"}
	};
	printf("������ ����? ");
	scanf("%d", &num);
	printf("���ϸ�? ");
	scanf("%s", name);
	// ���� �޸� �Ҵ�
	N = (int*)malloc(sizeof(int) * num);
	if (N == NULL){
		printf("Error!\n");
		return 1;
	}
	// .txt Ȯ���� �߰�
	strcat(name, ext[0]);
	FILE* fp10;
	fp10 = fopen(name, "w");

	if (fp10 == NULL) {
		printf("Error!\n");
		return 1;
	}
	// name.txt���� .txt ���� �� name.dat���� ����
	char* ptr = strtok(name, ".");
	strcat(ptr, ext[1]);
	FILE* fp2;
	fp2 = fopen(ptr, "wb");

	if (fp2 == NULL) {
		printf("Error!\n");
		return 1;
	}
	// rand()�Լ��� 0~99������ ������ �Է�
	for (int i = 0; i < num; i++) {
		N[i] = rand();
		fprintf(fp10, "%d\n", N[i]);
		fprintf(fp2, "%02x\n", N[i]);
	}
	// Ȯ���� �����
	char* ptr2 = strtok(name, ".");
	printf("%s.txt�� %s.dat�� �����߽��ϴ�.\n", ptr2, ptr2);
	// �Ҵ�� ���� �޸𸮿� ���� �ʱ�ȭ
	fclose(fp10);
	fclose(fp2);
	free(N);
}