#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int choose_menu(void) {
	int a;

	printf("[1. ���� ����  2.���� ����  3.�μ�  0.����] ");
	scanf("%d", &a);
	
	// �Է� ���� a�� ����
	return a;
}
int main(void) {

	for (;;) {
		// choose_menu()�Լ��� ���ϰ����� ������ ������ ������
		switch (choose_menu()) {
		case 1:
			printf("���� ���⸦ �����մϴ�.\n");
			break;
		case 2:
			printf("���� ������ �����մϴ�.\n");
			break;
		case 3:
			printf("�μ⸦ �����մϴ�.\n");
			break;
		case 0:
			return 0;
		}
	}
	return 0;
}