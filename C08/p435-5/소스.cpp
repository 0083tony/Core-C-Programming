#include<stdio.h>
void arith_seq(int, int);
int main(void) {
	int arr[10];
	int a, b, * p;

	printf("ù��° ��? ");
	scanf_s("%d", &a);
	printf("����? ");
	scanf_s("%d", &b);

	// arr[0] = ù��° ��, ������ p = arr[0]
	arr[0] = a;
	p = &arr[0];

	// ������ p, ���� b�� �Ű������� �Լ��� ����
	arith_seq(*p, b);
	
	return 0;
}
void arith_seq(int p, int num) {
	printf("��������: ");

	// �������� ����, ���
	for (int i = 0; i < 10; i++) {
		printf("%d ", p);
		p = p + num;
	}
}