#include<stdio.h>
int main(void)
{
	float x, y;

	// %f�� �Ǽ� �Է�
	printf("�Ǽ� 2��? ");
	scanf_s("%f %f", &x, &y);

	//  %f�� �Ǽ� ���
	printf("%f + %f = %f\n", x, y, x + y);
	printf("%f - %f = %f\n", x, y, x - y);

	return 0;
}