#include<stdio.h>
#include<stdlib.h> // srand(), rand() �Լ�
#include<time.h> // time() �Լ�
int main(void) {
	unsigned char arr[16], brr[16];
	srand(time(NULL));

	// 0~255 ������ ������ �迭�� ä��
	for (int i = 0; i < 16; i++) {
		arr[i] = rand() % 256;
		brr[i] = rand() % 256;
	}
	printf("image1: ");
	for (int i = 0; i < 16; i++) {
		printf("%4X", arr[i]);
	}
	printf("\nimage2: ");
	for (int i = 0; i < 16; i++) {
		printf("%4X", brr[i]);
	}
	// or ���� �� ���
	printf("\nimage3: ");
	for (int i = 0; i < 16; i++) {
		printf("%4X", arr[i] | brr[i]);
	}
	return 0;
}