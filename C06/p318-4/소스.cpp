#include<stdio.h>
int discount_price(int a, int b) {

	return (1 - (0.01 * a)) * b;
}
int main(void) {
	int a, b;

	printf("������(%%)? ");
	scanf_s("%d", &a);

	// ���ѷ��� for(;;) == while(1)
	for (;;) {
		printf("��ǰ�� ����? ");
		scanf_s("%d", &b);
		printf("���ΰ�: %d��\n", discount_price(a, b));
		// b == 0 ���ѷ��� Ż��
		if (b == 0) {
			break;
		}
	}
	return 0;
}