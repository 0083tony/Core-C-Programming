#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100
int main(void) {
	char text_filename_A[SIZE];
	char text_filename_B[SIZE];
	char A, B;
	FILE* fpA;
	FILE* fpB;
	// ������ �̸��� �Է¹���
	printf("���� ����? ");
	scanf("%s", text_filename_A);
	printf("Ÿ�� ����? ");
	scanf("%s", text_filename_B);
	// ������ �ҷ���
	fpA = fopen(text_filename_A, "r");
	fpB = fopen(text_filename_B, "r");
	// ���� �ҷ����� ���н� Error! ��°� �Բ� ����
	if (fpA == NULL || fpB == NULL) {
		printf("Error!\n");
		return 1;
	}
	for (;;) {
		if (feof(fpA) == 0 && feof(fpB) == 0) {
			// ���Ͽ� ����� ���ڸ� �� ���ھ� A,B�� ����
			A = fgetc(fpA);
			B = fgetc(fpB);
			// foeof() �Լ��� ����� ��
			if (A != B) {
				printf("�� ������ �ٸ��ϴ�.\n");
				break;
			}
			else if (feof(fpA) != 0 && feof(fpB) == 0) {
				printf("�� ������ �ٸ��ϴ�.\n");
				break;
			}
			else if (feof(fpA) == 0 && feof(fpB) != 0) {
				printf("�� ������ �ٸ��ϴ�.\n");
				break;
			}
			else {
				printf("�� ������ �����ϴ�.\n");
				break;
			}
		}
	}
	fclose(fpA);
	fclose(fpB);
}