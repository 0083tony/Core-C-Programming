#include <stdio.h>
#include <stdlib.h> // rand(),srand() �Լ�
#include <time.h> // time() �Լ�
void divisors(int a) {
	int count = 0;

	printf("%d�� ���: ", a);

	for (int i = 1; i <= a; i++) {
		// ���� a�� 1���� a���� ���� �������� 0 == count++
		if (a % i == 0) {
			// count�� ����� ���� ����
			count++;
			printf("%3d ", i);
		}
	}
	printf("==> �� %d��\n", count);
}
int main(void) {
	srand(time(NULL)); // �׻� �ٸ� ������ ���� �� �ִ�.
	int i;
	
	for (i = 0; i < 3; i++) {
		// 0~999 ������ ����
		int a = rand() % 1000;
		divisors(a);
	}
	return 0;
}