#include<stdio.h>
int main(void) {
	double arr[3];
	double* p;

	for (int i = 0; i < 3; i++) {
		p = &arr[i];
		// �ּҴ� %p�� ���
		printf("x[%d]�� �ּ�: %p\n", i, p);
	}
	return 0;
}