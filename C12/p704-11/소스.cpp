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
	}
}