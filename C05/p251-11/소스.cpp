#include<stdio.h>
int main(void) {
	unsigned int ui;
	int i = 1;

	// for���� ����� 31�� �ݺ�
	for (ui = 0; ui <= 31; ui++) {
		// ����Ʈ ����
		printf("%2d�� ��Ʈ�� 1�� ��: %08x %d\n", ui, i << ui, i << ui);
	}
	return 0;
}