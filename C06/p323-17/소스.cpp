#include<stdio.h>
int get_quadrant(int x, int y) {

	// ���� ��ġ n�и��� ã�Ƽ� ����
	if (x > 0 && y > 0) return 1;

	else if (x < 0 && y > 0) return 2;

	else if (x < 0 && y < 0) return 3;

	else if (x > 0 && y < 0) return 4;
		
	return 0;
}
int main(void) {
	int x, y;

	for (;;) {
		printf("���� ��ǥ (x, y)? ");
		scanf_s("%d %d", &x, &y);

		switch (get_quadrant(x, y)) {
			// 0 ���Ͻ� ���α׷� ����
		case 0:
			return 0;
		case 1:
			printf("1��и鿡 �ֽ��ϴ�.\n");
			break;
		case 2:
			printf("2��и鿡 �ֽ��ϴ�.\n");
			break;
		case 3:
			printf("3��и鿡 �ֽ��ϴ�.\n");
			break;
		case 4:
			printf("4��и鿡 �ֽ��ϴ�.\n");
			break;
		}
	}
}