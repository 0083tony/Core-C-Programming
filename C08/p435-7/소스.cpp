#include<stdio.h>
void reverse_array(double* arr) {
	double* p = &arr[10];

	printf("\n����: ");

	for (int i = 0; i < 10; i++) {
		p--;
		printf("%.1f  ", *p);
	}
}
int main(void) {
	double arr[10] = { 1.2,3.1,4.3,4.5,6.7,2.3,3.8,7.9,2.3,5.8 };

	printf("�迭: ");

	for (int i = 0; i < 10; i++) {
		printf("%.1f  ", arr[i]);
	}

	// �迭�� �Ű������� �Լ��� ����
	reverse_array(arr);

	return 0;
}