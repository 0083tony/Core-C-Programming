#include<stdio.h>
int main(void) {
	int h, m, s;

	printf("����ð�(��)? ");
	scanf_s("%d", &s);

	m = s / 60;
	h = m / 60;
	s = s % 60;
	m = m % 60;

	printf("����ð��� %d�ð� %d�� %d���Դϴ�.", h, m, s);

	/*
	if���� ����� ���� ����
	if(h == 0 && m != 0) {
		printf("����ð��� %d�� %d���Դϴ�.", m, s);
	}
	if (h == 0 && m == 0) {
		printf("����ð��� %d���Դϴ�.", s);
	}
	if (h != 0) {
		printf("����ð��� %d�ð� %d�� %d���Դϴ�.", h, m, s);
	}*/

	return 0;
}