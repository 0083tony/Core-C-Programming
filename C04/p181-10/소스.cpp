#include<stdio.h>
int main(void) {
	int day, hour, min;
	float a;

	printf("���� �ҿ�ð�(�ð�)? ");
	scanf_s("%f", &a);

	day = a / 24;
	hour = a - day * 24;
	min = (a - (int)a) * 60;
	printf("���� �ҿ�ð��� %d�� %d�ð� %d�� �Դϴ�.", day, hour, min);

	/*��� ���
	if (a >= 24) {
		day = a / 24;
		hour = a - day * 24;
		min = (a - (int)a) * 60;
		printf("���� �ҿ�ð��� %d�� %d�ð� %d�� �Դϴ�.", day, hour, min);
	}
	else {
		hour = a;
		min = (a - (int)a) * 60;
		printf("���� �ҿ�ð��� %d�ð� %d�� �Դϴ�.", hour, min);
	}*/
	return 0;
}