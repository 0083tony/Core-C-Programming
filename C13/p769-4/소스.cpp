#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141592 // PI�� 3.141592�� ����
#define AREA_RECT(w,h) ((w)*(h))
#define AREA_CIRCLE(r) ((r)*PI)
#include <stdio.h>
int main(void) {
	int i;
	int w, h, r;

	// ���� ����
	for (;;) {
		printf("������ ����(1.���簢��  2.��  0.����)? ");
		scanf("%d", &i);

		// 0�� �ԷµǸ� ���� ������ ��������
		if (i == 0) {
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
		// 1�� �ԷµǸ� AREA_RECT ��ũ�� �Լ��� ����
		if (i == 1) {
			printf("���� ����? ");
			scanf("%d %d", &w, &h);
			printf("����: %d\n", AREA_RECT(w, h));
		}
		// 2�� �ԷµǸ� AREA_CIRCLE ��ũ�� �Լ��� ����
		if (i == 2) {
			printf("������? ");
			scanf("%d", &r);
			printf("����: %lf\n", AREA_CIRCLE(r));
		}
		// 2���� ū ���� ������ ����
		else if (i > 2) {
			printf("0~2 ������ ���ڸ� �Է��� �ּ���!!\n");
		}
	}
}
