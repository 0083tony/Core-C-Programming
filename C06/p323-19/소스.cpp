#include <stdio.h>
#include <stdlib.h> // rand(),srand() �Լ�
#include <time.h> // time() �Լ�
void make_graph(int a) {
	a = a / 100;

	for (int i = 0; i <= a; ++i) {
		printf("*");
	}
	printf("\n");
}
int main(void) {
	srand(time(NULL)); // ��ȸ �ٸ� ������ ����
	int i;

	for (i = 0; i < 3; i++) {
		// 0~9999 ������ ������ a�� �Է�
		int a = rand() % 10000;
		printf("%d: ", a);
		make_graph(a);
	}
	return 0;
}