#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>// Argc, Argv, atoi()�Լ�
int main(int argc, char* argv[]) {
	char ch = *argv[2];
	// �������� ���������� ��ȯ argv[0] = C:\Users\0083>C:\Users\0083\source\repos\Project\Debug\Project.exe
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);

	switch (ch) {
	case'+':
		printf("%d + %d = %d\n", num1, num2, num1 + num2);
		break;
	case'-':
		printf("%d - %d = %d\n", num1, num2, num1 - num2);
		break;
	case'*':
		printf("%d * %d = %d\n", num1, num2, num1 * num2);
		break;
	case'/':
		if (num1 == 0) {
			printf("0�� ������ ���� �Ұ��� �մϴ�.\n");
			break;
		}
		else {
			printf("%d / %d = %d\n", num1, num2, num1 / num2);
			break;
		}
	case'%':
		printf("%d %% %d = %d\n", num1, num2, num1 % num2);
		break;
	default:
		printf("�ùٸ� ������ �Է��ϼ���.\n");
		break;
	}
}