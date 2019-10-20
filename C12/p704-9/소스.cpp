#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //strlen()함수
#define SIZE 100
int main(void) {
	char text_contents[SIZE];
	int key, k = 0;
	FILE* fp;;
	fp = fopen("cipher.txt", "w");
	printf("암호 키? ");
	scanf("%d", &key);
	getchar();
	printf("암호화할 텍스트?\n");
	// %[^\n]s 를 사용해 \n을 제외한 모든 문자를 입력받음
	scanf("%[^\n]s", text_contents);
	
	// text_contents[i]에 A(ASCII 65)를 빼서 A를 0으로 만들어 기준을 잡고 key의 값만큼 더한다.
	for (size_t i = 0; i < strlen(text_contents); i++) {
		if (text_contents[i] >= 'A' && text_contents[i] <= 'Z') {
			text_contents[i] -= 'A';
			if (text_contents[i] + key < 0) {
				text_contents[i] += 26;
			}
			// 알파벳은 26문자로 이루어져있기에 26보다 큰값을 버리는것
			text_contents[i] = (text_contents[i] + key) % 26;
			// 나머지값에 A를 더해 ASCII코드를 맞춘다.
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
	// 파일에 암호화한 텍스트를 저장하고 파일을 닫음.
	fputs(text_contents, fp);
	fclose(fp);
}