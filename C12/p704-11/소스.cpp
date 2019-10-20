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
	}
}