#include<stdio.h>
int main(void) {
	float a, b;
	int min;

	printf("�̵� �Ÿ�(km)? ");
	scanf_s("%f", &a);
	printf("���� �ӷ�(km/h)? ");
	scanf_s("%f", &b);

	// �Է¹��� �Ǽ��� ���������� ��ȯ
	min = int(a / b * 60);

	printf("�������� ���� �ҿ� �ð��� %d���Դϴ�.", min);

	return 0;
}