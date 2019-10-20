#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc()�Լ�
#include <string.h> // strcmp()�Լ�
#define SIZE 100
struct CONTACT {
	char name[SIZE];
	unsigned int num;
};
int main(void) {
	char text_filename[SIZE];
	char name[SIZE];
	int struct_size = 5;
	char yesno;

	// ����ó�� ����Ǿ��ִ� ���� �ҷ�����
	FILE* fp;
	printf("����ó ���ϸ�? ");
	gets_s(text_filename, SIZE);
	fp = fopen(text_filename, "r");

	// ���� �޸� �Ҵ�
	CONTACT* arr;
	arr = (struct CONTACT*)malloc(sizeof(struct CONTACT) * struct_size);

	// ���� �޸𸮿� ���Ͽ� ����� ����ó �Է�
	for (int i = 0; i < struct_size; i++) {
		fscanf(fp, "%s%d", &arr[i].name, &arr[i].num);
	}
	fclose(fp);
	printf("%d���� ����ó�� �ε��߽��ϴ�.\n", struct_size);

	for (;;) {
	start:
		printf("�̸�(. �Է� �� ����)? ");
		scanf("%s", name);
		// . �Է½� ���α׷� ����
		if (*name == '.')
			break;
		// ���� �޸𸮿� ����� �̸��� �Է¹��� �̸��� ��
		for (int i = 0; i < struct_size; i++) {
			if (!strcmp(name, arr[i].name)) {
				printf("%s�� ��ȭ��ȣ %d�� ��ȭ�� �̴ϴ�....\n", arr[i].name, arr[i].num);
				goto start;
			}
		}
		printf("����ó�� ã�� �� �����ϴ�.\n");
		printf("����ó�� ����Ͻðڽ��ϱ�? (Y/N)\n");
		getchar();
		scanf("%c", &yesno);
		// Y�� �Է¹����� �̸��� �����ϰ� ��ȭ��ȣ�� �Է¹���
		if ((yesno == 'Y') || (yesno == 'y')) {
			strncpy(arr[struct_size].name, name, SIZE);
			printf("��ȭ��ȣ? ");
			scanf("%d", &arr[struct_size].num);
			struct_size++;
			goto start;
		}
	}
	// ���� �޸𸮿� ����� �̸�, ��ȭ��ȣ�� ���Ϸ� ���
	fp = fopen(text_filename, "w");
	for (int i = 0; i < struct_size; i++) {
		fprintf(fp, "%s %d\n", arr[i].name, arr[i].num);
	}
	fclose(fp);
}