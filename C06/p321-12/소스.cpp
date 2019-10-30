#include<stdio.h>
int is_leap_year(int i) {
	
	if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0)) {
		return i;
	}
	return 0;
}
int main(void) {
	int count = 0; // ������ ����ϴ� Ƚ�� ī����

	printf("2000�� ~ 2100�� ������ ����\n");

	for (int i = 2000; i < 2101; i++) {

		// ���ϰ��� 0�� �ƴϸ� �Լ����� ã�� ���� i�� ���
		if (is_leap_year(i) != 0) {
			printf("%d��  ", i);
			count++;

			// 10���� ������ ã���� ���� �ٹٲ�
			if (count % 10 == 0) {
				printf("\n");
			}
		}
	}
	return 0;
}