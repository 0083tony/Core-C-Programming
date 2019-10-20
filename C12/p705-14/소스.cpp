#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // qsort()�Լ�, atoi()�Լ�
#include <string.h> // strcmp()�Լ�
#define SIZE 300
#define MAX 32767
int compare(const void* a, const void* b) {
	return (strcmp((char*)a, (char*)b));
}
int main(void) {
	char dat_filename1[SIZE];
	char dat_filename2[SIZE];
	char dat_filename3[SIZE];
	char temp[SIZE];
	int size1 = 0, size2 = 0, size3 = 0;
	int arr[MAX];
	int i = 0;

	FILE* fp1;
	printf("ù ��° ���ϸ�? ");
	gets_s(dat_filename1, SIZE);
	fp1 = fopen(dat_filename1, "rb");
	// ��ġ�ϴ� ���ϸ��� �߰����� ���ϸ� Error!
	if (fp1 == NULL) {
		printf("Error!\n");
		return 1;
	}
	// \n�� ã�� ī�����ϰ� arr�� ���� ����
	while (!feof(fp1)) {
		fgets(temp, SIZE, fp1);
		arr[i] = atoi(temp);
		i++;
		if (temp[strlen(temp) - 1] == '\n') {
			size1++;
		}
	}
	printf("���� %d���� �о����ϴ�.\n", size1);

	FILE* fp2;
	printf("�� ��° ���ϸ�? ");
	gets_s(dat_filename2, SIZE);
	fp2 = fopen(dat_filename2, "rb");
	// ��ġ�ϴ� ���ϸ��� �߰����� ���ϸ� Error!
	if (fp2 == NULL) {
		printf("Error!\n");
		return 1;
	}
	// \n�� ã�� ī�����ϰ� arr�� ���� ����
	while (!feof(fp2)) {
		fgets(temp, SIZE, fp2);
		arr[i] = atoi(temp);
		i++;
		if (temp[strlen(temp) - 1] == '\n') {
			size2++;
		}
	}
	printf("���� %d���� �о����ϴ�.\n", size2);

	FILE* fp3;
	printf("������ ���ϸ�? ");
	gets_s(dat_filename3, SIZE);
	fp3 = fopen(dat_filename3, "w+b");
	// arr�� ����� ������ qsort�Լ��� ����� ����
	qsort((void*)arr, i, sizeof(arr[0]), compare);
	// ���ĵ� arr�� fp3�� �Է�
	for (int k = 0; k < i; k++) {
		fprintf(fp3, "%d\n", arr[k]);
	}
	printf("���� %d���� �����߽��ϴ�.\n", i);

	fclose(fp1);
	fclose(fp2);
	fclose(fp3);

	return 0;
}