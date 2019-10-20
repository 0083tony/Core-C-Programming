#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc()함수
#include <string.h> // strcmp()함수
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

	// 연락처가 저장되어있는 파일 불러오기
	FILE* fp;
	printf("연락처 파일명? ");
	gets_s(text_filename, SIZE);
	fp = fopen(text_filename, "r");

	// 동적 메모리 할당
	CONTACT* arr;
	arr = (struct CONTACT*)malloc(sizeof(struct CONTACT) * struct_size);

	// 동적 메모리에 파일에 저장된 연락처 입력
	for (int i = 0; i < struct_size; i++) {
		fscanf(fp, "%s%d", &arr[i].name, &arr[i].num);
	}
	fclose(fp);
	printf("%d개의 연락처를 로딩했습니다.\n", struct_size);

	for (;;) {
	start:
		printf("이름(. 입력 시 종료)? ");
		scanf("%s", name);
		// . 입력시 프로그램 종료
		if (*name == '.')
			break;
		// 동적 메모리에 저장된 이름과 입력받은 이름을 비교
		for (int i = 0; i < struct_size; i++) {
			if (!strcmp(name, arr[i].name)) {
				printf("%s의 전화번호 %d로 전화를 겁니다....\n", arr[i].name, arr[i].num);
				goto start;
			}
		}
		printf("연락처를 찾을 수 없습니다.\n");
		printf("연락처를 등록하시겠습니까? (Y/N)\n");
		getchar();
		scanf("%c", &yesno);
		// Y를 입력받으면 이름을 복사하고 전화번호를 입력받음
		if ((yesno == 'Y') || (yesno == 'y')) {
			strncpy(arr[struct_size].name, name, SIZE);
			printf("전화번호? ");
			scanf("%d", &arr[struct_size].num);
			struct_size++;
			goto start;
		}
	}
	// 동적 메모리에 저장된 이름, 전화번호를 파일로 출력
	fp = fopen(text_filename, "w");
	for (int i = 0; i < struct_size; i++) {
		fprintf(fp, "%s %d\n", arr[i].name, arr[i].num);
	}
	fclose(fp);
}