#include<stdio.h>
int main(void) {
	float a;

	printf("����Ʈ�� ����(��������)? ");
	scanf_s("%f", &a);

	// pritnf�� �ȿ��� ���� ����, %.2f == �Ҽ��� ��° �ڸ����� �ݿø�
	printf("%.2f �������� = %.2f ��", a, 0.3025 * a);

	return 0;
}