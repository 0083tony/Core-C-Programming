#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100
int main(void) {
	char text_filename[SIZE];
	char text_contents[SIZE];
	int key;
	FILE* fp;
	// 파일 이름을 입력받고 불러옴
	printf("복호화할 파일? ");
	gets_s(text_filename, SIZE);
	fp = fopen(text_filename, "r");
	// 파일을 찾지 못하면 Error! 출력 후 종료
	if (fp == NULL) {
		printf("Error!\n");
		return 1;
	}
	// 복호 키를 입력받음 
	printf("복호 키? ");
	scanf("%d", &key);
	key = -key;
	// text_contents[i]에 A(ASCII 65)를 빼서 A를 0으로 만들어 기준을 잡고 key의 값만큼 뺀다.
	while (!feof(fp)) {
		fgets(text_contents, SIZE, fp);
		for (size_t i = 0; i < strlen(text_contents); i++) {
			if (text_contents[i] >= 'A' && text_contents[i] <= 'Z') {
				text_contents[i] -= 'A';
				if (text_contents[i] + key < 0) {
					text_contents[i] += 26;
				}
				// 알파벳은 26문자로 이루어져있기에 26보다 큰값을 버림
				text_contents[i] = (text_contents[i] + key) % 26;
				text_contents[i] += 'A';
			}
			if (text_contents[i] >= 'a' && text_contents[i] <= 'z') {
				text_contents[i] -= 'a';
				if (text_contents[i] + key < 0) {
					text_contents[i] += 26;
				}
				text_contents[i] = (text_contents[i] + key) % 26;
				text_contents[i] += 'a';
			}
		}
	}
	// 복호화한 암호를 출력하고 파일을 닫음
	printf("%s\n", text_contents);
	fclose(fp);
}