#include<stdio.h>
float calculator(float a, float b, char c) {
	float n = 0;

	switch (c)
	{
	case '+':
		n = a + b;
		break;
	case '-':
		n = a - b;
		break;
	case '*':
		n = a * b;
		break;
	case '/':
		n = a / b;
	default:
		printf("Error!!\n");
		break;
	}

	return n;
}
int main(void) {
	float a = 0, b = 0;
	char c;

	// for(;;), while(1) == ���� ����
	for (;;) {
		printf("���� (0 0 0 �Է� �� ����)? ");
		scanf_s("%f %c %f", &a, &c, 30, &b);

		// 0 0 0 �Է½� ���ѷ��� Ż��
		if (a == 0 && b == 0 && c == '0') {
			break;
		}
		printf("%f\n", calculator(a, b, c));
	}
	return 0;
}