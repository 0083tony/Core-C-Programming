#include<stdio.h>
#include<stdlib.h>// srand(), rand()�Լ�
#include<time.h>// time() �Լ�
#define ASCENDING 0 
#define DESENDING 1
void sort_array_with_order(int* arr) {
	int temp;

	// 0�� �ƴϸ� #if ~ #endif ���� ������ ����
#if(ASCENDING == 0)
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9; j++) {
			/* ��Һ񱳸� ���� ������������ ����
			ex) arr[1]�� arr[2]���� ũ�� temp�� arr[1]�� �����ϰ� arr[1]�� arr[2]�� �����Ѵ�
			�׸��� arr[2]�� �̸� �����ص� temp�� ��(�ʱ��� arr[1])�� ������*/
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("\n�������� ���� ��:");

	for (int i = 0; i < 10; i++) {
		printf("%3d", arr[i]);
	}
#endif

	// 1�� �ƴϸ� #if ~ #endif ���� ������ ����
#if(DESENDING == 1)
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9; j++) {
			// ��Һ񱳸� ���� ������������ ����
			if (arr[j] < arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("\n�������� ���� ��:");

	for (int i = 0; i < 10; i++) {
		printf("%3d", arr[i]);
	}
#endif
}
int main(void) {
	srand(time(NULL));// �׻� �ٸ� ����� ����
	int arr[10];

	printf("���� ��:");

	for (int i = 0; i < 10; i++) {
		// 0~99 ������ ������ arr[i]�� ����
		arr[i] = rand() % 100;
		printf("%3d", arr[i]);
	}

	sort_array_with_order(arr); //�迭�� �Ű������� ����

	return 0;
}