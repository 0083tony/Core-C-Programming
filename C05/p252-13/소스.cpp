#include<stdio.h>
int main(void) {
	int ASCII;
	int i = 1;

	// for���� ����� ASCII �ڵ� 32~127������ ���
	for (ASCII = 32; ASCII < 127; ASCII++) {
		printf("%c ", ASCII);

		// i�� 24�� ������ ����� �������� 0�� �ɶ����� �� ����
		if (i % 24 == 0)
			printf("\n");
		i++;
	}
	return 0;
}