#include<stdio.h>
#include<math.h> // sqrt()�Լ�
int main(void) {
	int a, b, c, d;
	int x, y;

	printf("������ ������ (x1, y1)? ");
	scanf_s("%d %d", &a, &b);
	printf("������ ���� (x2, y2)? ");
	scanf_s("%d %d", &c, &d);

	x = a - c;
	y = b - d;

	// sqrt() == ��Ʈ ����
	printf("������ ����: %f", sqrt((x * x) + (y * y)));

	return 0;
}