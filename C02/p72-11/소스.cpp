#include<stdio.h>
int main(void)
{
	float x;
	x = 3.13159265;

	printf("pi =  %.2f\n", x); // %.2f �� �Ҽ��� �Ʒ� 2�ڸ��� ǥ��
	printf("pi =  %.4f\n", x);
	printf("pi =  %.6f\n", x);
	printf("pi =  %.8f\n", x);
	printf("pi =  %e\n", x); // %e�� ���� ���

	return 0;
}