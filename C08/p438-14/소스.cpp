#include<stdio.h>
#include<stdlib.h> // srand(), rand()�Լ�
#include<time.h> // time()�Լ�
void rand_array(int* arr) {
	for (int i = 0; i < 10; i++) {
		// ũ�Ⱑ 10�� �迭�� 0~99 ������ ������ ä��
		arr[i] = rand() % 100;
	}
}
int main(void) {
	srand(time(NULL)); // �׻� �ٸ� ������ ���� �� �ִ�
	int arr[10];
	int count = rand() % 10; // count = 0~9 ������ ����

	printf("count = %d\n", count);

	// count�� ��ŭ �ݺ�
	for (int i = 0; i < count; i++) {
		// arr�� �Ű������� ����
		rand_array(arr);
		// arr�� ���Ҹ� ���
		for (int j = 0; j < 10; j++) {
			printf("%4d", arr[j]);
		}
		printf("\n");
	}

	return 0;
}