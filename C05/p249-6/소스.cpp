#include<stdio.h>
int main(void) {
	float a;
	char b;

	printf("����? ");
	scanf_s("%f %c", &a, &b, 20);

	if (b == 'm') {
		printf("%.2f �������� == %.2f �� ", a, 0.3025 * a);
	}
	else if (b == 'p') {
		printf("%.2f �� ==> %.2f �������� ", a, 3.305785 * a);
	}
	else {
		printf("�Էµ� ������ �ùٸ��� �ʽ��ϴ�.\n");
	}

	return 0;
}