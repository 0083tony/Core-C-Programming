#include<stdio.h>
float get_area_of_squarer(float a) {
	// ���簢���� ���� = �Ѻ��� ���� * �Ѻ��� ����
	return a * a;
}
int main(void) {
	float a;

	printf("�� ���� ����? ");
	scanf_s("%f", &a);

	printf("���簢���� ����: %f", get_area_of_squarer(a));

	return 0;
}