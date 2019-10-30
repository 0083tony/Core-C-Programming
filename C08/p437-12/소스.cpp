#include<stdio.h>
int find_all_in_array(int* arr, int size, int key) {
	int count = 0; 

	// key���� ������ �迭���� �߽߰� index�� arr�� ���� �� count++
	for (int i = 0; i < size; i++) {
		if (arr[i] == key) {
			arr[count] = i;
			count++;
		}
	}
	return count;	
}
int main(void) {
	int arr[10] = { 12,45,62,12,99,83,23,12,72,37 };
	int key, index;
	int size = 10; // �迭�� ũ��

	for (int i = 0; i < 10; i++) {
		printf("%3.d", arr[i]);
	}

	printf("\nã�� ��? ");
	scanf_s("%d", &key);

	// �迭, �迭�� ũ��, key���� �Ű������� ����
	index = find_all_in_array(arr, size, key);

	printf("ã�� �׸��� ��� %d���Դϴ�.\n", index);
	printf("ã�� �׸��� �ε���: ");

	// �׸��� �ε��� ���
	for (int i = 0; i < index; i++) {
		printf("%3d", arr[i]);
	}

	return 0;
}