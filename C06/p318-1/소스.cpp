#include<stdio.h>
int get_perimeter(int a, int b) {
	// ���簢���� �ѷ� = (���� + ����) * 2
	return (a + b) * 2;
}
int main(void) {
	int a, b;

	printf("����? ");
	scanf_s("%d", &a);
	printf("����? ");
	scanf_s("%d", &b);

	printf("���簢���� �ѷ�: %d", get_perimeter(a, b));

	return 0;
}