#include<stdio.h>
int main(void) {
	int a, b;
	char c;

	printf("��Ʈ �����? ");
	scanf_s("%i %c %i", &a, &c, 20, &b);

	// �Է¹��� ��Ʈ ������� ����
	if (c == '&') {
		printf("%X & %X = %X", a, b, a & b);
	}
	else if (c == '|') {
		printf("%X | %X = %X", a, b, a | b);
	}
	else if (c == '^') {
		printf("%X ^ %X = %X", a, b, a ^ b);
	}
	else {
		printf("�ùٸ� ���� �Է��� �ּ���.\n");
	}

	return 0;
}