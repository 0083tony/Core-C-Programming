#include<stdio.h>
int main(void) {
	int n;
	int a, b, c, d, e, f;

	printf("�Ž�����? ");
	scanf_s("%d", &n);

	n = n - n % 10;

	printf("�Ž����� (10���̸� ����): %d\n", n);

	// n�� x������ ���� �������� 1���� ũ�� �� ���� �����κ� a�� �����ϰ� n�� - (x�� * a��) ���� �� a�� ���
	if (n / 50000 >= 1) {
		a = n / 50000;
		n = n - 50000 * a;
		printf("50000�� %d�� \n", a);
	}
	if (n / 10000 >= 1) {
		b = n / 10000;
		n = n - 10000 * b;
		printf("10000�� %d�� \n", b);
	}
	if (n / 5000 >= 1) {
		c = n / 5000;
		n = n - 5000 * c;
		printf("5000��  %d�� \n", c);
	}
	if (n / 1000 >= 1) {
		d = n / 1000;
		n = n - 1000 * d;
		printf("1000��  %d�� \n", d);
	}
	if (n / 100 >= 1) {
		e = n / 100;
		n = n - 100 * e;
		printf("100��   %d�� \n", e);
	}
	if (n / 10 >= 1) {
		f = n / 10;
		n = n - 10 * f;
		printf("10��    %d�� \n", f);
	}
	
	return 0;
}