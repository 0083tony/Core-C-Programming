#include<stdio.h>
#include<stdlib.h> // srand(), rand() �Լ�
#include <time.h> // time() �Լ�
void suf(int* arr) {
	srand(time(NULL)); 
	// �����÷ο� ������ int�� �ƴ� size_t ���
	for (size_t i = 0; i < 10; i++) {
		// ������ ������ ����
		size_t j = i + rand() / (RAND_MAX / (10 - i) + 1);
		int temp = arr[j];
		arr[j] = arr[i];
		arr[i] = temp;
		printf("%4d", temp);
	}
}
int main(void) {
	int arr[10] = { 12,64,80,42,67,9,8,7,56,48 };

	printf("���� ��: ");
	for (int i = 0; i < 10; i++) {
		printf("%4d", arr[i]);
	}
	printf("\n���� ��: ");
	suf(arr);
	
	return 0;
}