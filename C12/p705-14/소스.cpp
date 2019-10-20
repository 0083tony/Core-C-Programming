#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // qsort()함수, atoi()함수
#include <string.h> // strcmp()함수
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
	printf("첫 번째 파일명? ");
	gets_s(dat_filename1, SIZE);
	fp1 = fopen(dat_filename1, "rb");
	// 일치하는 파일명을 발견하지 못하면 Error!
	if (fp1 == NULL) {
		printf("Error!\n");
		return 1;
	}
	// \n을 찾아 카운팅하고 arr에 정수 저장
	while (!feof(fp1)) {
		fgets(temp, SIZE, fp1);
		arr[i] = atoi(temp);
		i++;
		if (temp[strlen(temp) - 1] == '\n') {
			size1++;
		}
	}
	printf("정수 %d개를 읽었습니다.\n", size1);

	FILE* fp2;
	printf("두 번째 파일명? ");
	gets_s(dat_filename2, SIZE);
	fp2 = fopen(dat_filename2, "rb");
	// 일치하는 파일명을 발견하지 못하면 Error!
	if (fp2 == NULL) {
		printf("Error!\n");
		return 1;
	}
	// \n을 찾아 카운팅하고 arr에 정수 저장
	while (!feof(fp2)) {
		fgets(temp, SIZE, fp2);
		arr[i] = atoi(temp);
		i++;
		if (temp[strlen(temp) - 1] == '\n') {
			size2++;
		}
	}
	printf("정수 %d개를 읽었습니다.\n", size2);

	FILE* fp3;
	printf("저장할 파일명? ");
	gets_s(dat_filename3, SIZE);
	fp3 = fopen(dat_filename3, "w+b");
	// arr에 저장된 정수를 qsort함수를 사용해 정렬
	qsort((void*)arr, i, sizeof(arr[0]), compare);
	// 정렬된 arr를 fp3에 입력
	for (int k = 0; k < i; k++) {
		fprintf(fp3, "%d\n", arr[k]);
	}
	printf("정수 %d개를 저장했습니다.\n", i);

	fclose(fp1);
	fclose(fp2);
	fclose(fp3);

	return 0;
}