#include <stdio.h>
#include <stdlib.h> //rand() �Լ�
#include <time.h> //time() �Լ�
int random(int add) {
	int random = 0;
	srand(time(NULL)); // �� ��¸��� �ٸ� ������ ����

	for (int i = 0; i < 10; i++) {
		// rand() % 100 == 0~99 ������ ���� ����
		random = rand() % 100;
		printf("%5d", random);
		add = random + add;
	}
	return add;
}
int main(void) {
	int add = 0;

	printf("0 ~ 99������ ������ ������ 10�� �����ؼ� �հ踦 ���մϴ�.\n");
	printf("\n�հ�: %d", random(add));

	return 0;
}