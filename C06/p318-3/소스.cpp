#include<stdio.h>
#include<math.h> // sqrt(), pow()�Լ�
double distance(int a, int b, int c, int d) {
	// sqrt() == ��Ʈ, pow() == �ŵ�����
	return sqrt(pow(c - a, 2) + pow(d - b, 2));
}
int main(void) {
	int a, b, c, d;

	printf("������ ������ ��ǥ? ");
	scanf_s("%d %d", &a, &b);
	printf("������ ���� ��ǥ? ");
	scanf_s("%d %d", &c, &d);

	printf("(%d,%d)~(%d,%d) ������ ����: %f", a, b, c, d, distance(a, b, c, d));

	return 0;
}