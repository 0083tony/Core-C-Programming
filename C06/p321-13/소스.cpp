#include<stdio.h>
int is_leap_year(int year) {
	// �������� �˻��ϴ� �Լ�
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
		return year;
	}
	return 0;
}
int get_days_of_month(int year, int i) {
	// �ش� �⵵ ���� ��¥���� �����ϴ� �Լ�
	if (i != 2 && i != 8 && i / 2 == 0) {
		return 31;
	}
	else if (i == 2) {
		if (is_leap_year(year) != 0) {
			return 29;
		}
		else return 28;
	}
	else return 30;
	
}
int main(void) {
	int year;

	printf("����? ");
	scanf_s("%d", &year);

	printf("[ %d�� ]\n", year);

	for (int i = 1; i < 13; i++) {
		printf("%2d��:%d�� ", i, get_days_of_month(year, i));
		if (i == 6) {
			printf("\n");
		}
	}
	return 0;
}