#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100
int main(void) {
	int arr[4];
	int price[3] = { 4000,4500,5000 };
	char menu[4][SIZE] = {
		{"�Ƹ޸�ī��"},
		{"ī���"},
		{"�÷�ȭ��Ʈ"},
		{"���� �ݾ�"}
	};
	FILE* fp;
	fp = fopen("receipt.txt", "w");
	for (;;) {
		// �޴��� ����ϰ� �ֹ��� ����
		printf("[�޴�] %5s:%d, %5s:%d, %5s:%d\n", menu[0], price[0], menu[1], price[1], menu[2], price[2]);
		printf("%-10s ����? ", menu[0]);
		scanf("%d", &arr[0]);
		printf("%-10s ����? ", menu[1]);
		scanf("%d", &arr[1]);
		printf("%-10s ����? ", menu[2]);
		scanf("%d", &arr[2]);
		arr[3] = (arr[0] * 4000) + (arr[1] * 4500) + (arr[2] * 5000);
		printf("%-10s: %d\n", menu[3], arr[3]);
		// arr[3]�� �ݾ��� 0�϶� break�ص� ���� ���
		if ((arr[0] == 0) && (arr[1] == 0) && (arr[2] == 0))
			break;
		// receipt.txt ������ ���� �ֹ����� ������ ���� ��꼭 ���
		
		fputs("��ǰ��		�ܰ�	����	�ݾ�\n", fp);
		fputs("--------------------------------------------------\n", fp);
		// �ֹ� ���� ���� 0�� �޴��� ������� ����
		if (arr[0] != 0)
			fprintf(fp, "%-10s	%d	%4d	%4d\n", menu[0], price[0], arr[0], arr[0] * price[0]);
		if (arr[1] != 0)
			fprintf(fp, "%-10s	%d	%4d	%4d\n", menu[1], price[1], arr[1], arr[1] * price[1]);
		if (arr[2] != 0)
			fprintf(fp, "%-10s	%d	%4d	%4d\n", menu[2], price[2], arr[2], arr[2] * price[2]);
		fputs("--------------------------------------------------\n", fp);
		fprintf(fp, "%-10s:%35d\n\n", menu[3], arr[3]);
	}
	fclose(fp);
	return 0;
}