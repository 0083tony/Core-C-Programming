#include<stdio.h>
int main(void) {
	int a, b, c;
	int set;

	printf("[�ܹ��� 4000��, ����Ƣ�� 2000��, �ݶ� 1500��, ��Ʈ 6500��]\n");
	printf("�ܹ��� ����? ");
	scanf_s("%d", &a);
	printf("����Ƣ�� ����? ");
	scanf_s("%d", &b);
	printf("�ݶ� ����? ");
	scanf_s("%d", &c);

	// ��Ʈ�� ������ ����
	if (a <= b) {
		if (a <= c) {
			set = a;
		}
	}
	if (b <= a) {
		if (b <= c) {
			set = b;
		}
	}
	if (c <= a) {
		if (c <= b) {
			set = c;
		}
	}

	printf("\n\n��ǰ��		�ܰ�	����	�ݾ�\n");

	if (set != 0) {
		printf("��Ʈ		6500	 %d	%d\n", set, 6500 * set);
	}
	if (a - set != 0) {
		printf("�ܹ���		4000	 %d	%d\n", a - set, 4000 * (a - set));
	}
	if (b - set != 0) {
		printf("����Ƣ��	2000	 %d	%d\n", b - set, 2000 * (b - set));
	}
	if (c - set != 0) {
		printf("����Ƣ��	2000	 %d	%d\n", c - set, 1500 * (c - set));
	}
	printf("\n--------------------------------------\n\n�հ�				%d\n", 6500 * set + 4000 * (a - set) + 2000 * (b - set) + 1500 * (c - set));

}