#include<stdio.h>
int main(void) {
	int kwh;
	float a = 0, b = 0;

	printf("�� ��뷮 (kwh)? ");
	scanf_s("%d", &kwh);

	// ����� ���·��� ���� �ݾ� ���
	if (kwh < 201) {
		a = 910;
		b = 93.3 * kwh;
	}
	if (200 < kwh < 401) {
		a = 1600;
		b = 187.9 * (kwh - 200) + (200 * 93.3);
	}
	if (400 < kwh) {
		a = 7300;
		b = 280.6 * (kwh - 400) + (200 * 93.3) + (200 * 187.9);
	}

	printf("���� ��� �հ�: %7.0f��\n", a + b);
	printf(" - �⺻ ���:   %7.0f��\n", a);
	printf(" - ���·����:  %7.0f��\n", b);

	return 0;
}