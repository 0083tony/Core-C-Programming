#include<stdio.h>
int main(void) {
	int a, b = 0;

	// while(1) || for(;;) == ���ѷ���
	while (1) {
		start:
		printf("���� �ð�(��)? ");
		scanf_s("%d", &a);

		// a == 0 �϶� ���� Ż��
		if (a == 0) {
			break;
		}
		if (a > 1440) {
			printf("���� �ð��� 24�ð��� ���� �� ����.\n");
			goto start;
		}
		if (a < 31) {
			printf("���� ���: 2000��\n");
			goto start;
		}
		else if (a > 30) {
			b = 2000 + (a - 30) / 10 * 1000;
		}
		if (b > 25000) {
			printf("���� ���: 25000��\n");
			goto start;
		}
		else {
			printf("���� ���: %d��\n", b + 1000);
			goto start;
		}
	}
	return 0;
}