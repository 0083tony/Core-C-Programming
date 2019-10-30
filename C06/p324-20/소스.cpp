#include<stdio.h>
double electric_charge(unsigned int kwh) {
	double a = 0, b = 0;

	// ��뷮�� ���� ���·� ��� + �⺻ ��� ���
	if (0 < kwh <= 20) {
		a = 910;
		b = 93.3 * kwh;

		if (200 < kwh < 400) {
			a = 1600;
			b = 187.9 * (kwh - 200) + (200 * 93.3);

			if (400 < kwh) {
				a = 7300;
				b = 280.6 * (kwh - 400) + (200 * 93.3) + (200 * 187.9);
			}
		}
	}
	// a == �⺻ ���, b == ���·� ���
	return a + b;
}
int main(void) {
	unsigned int kwh;

	for (;;) {
		printf("�� ��뷮 (kwh)? ");
		scanf_s("%d", &kwh);
		// -1 �Է½� ���α׷� ����
		if (kwh == -1) break;

		printf("���� ��� �հ�: %.0f��\n", electric_charge(kwh));
	}
	return 0;
}