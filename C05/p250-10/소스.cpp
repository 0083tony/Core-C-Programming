#include<stdio.h>
#include<math.h> // pow()�Լ�
int main(void) {
	int a, b;

	printf("�ݾ�? ");
	scanf_s("%d", &a);
	printf("������� (10�� ������)? ");
	scanf_s("%d", &b);

	// pow() == ������  ex) 2^4 == pow(2,4);
	b = pow(10, b);
	a = a - (a % b);

	printf("�ݾ�(%d �̸� ����): %d", b, a);

	return 0;
}