#include<stdio.h>
int main(void) {
	float a, b;

	printf("��ǰ�� ����? ");
	scanf_s("%f", &a);
	printf("������(%%)? ");
	scanf_s("%f", &b);

	/*��� ���
	if (b > 100 || b < 0) {
		printf("�������� 0���� �۰ų� 100���� Ŭ �� ����.");
		return 0;
	}
	if (a < 0) {
		printf("������ ���� 0���� ���� �� ����.");
		return 0;
	}*/
	printf("���ΰ�: %.0f�� (%.0f�� ����)", a - a * (b / 100), a * (b / 100));

	return 0;
}