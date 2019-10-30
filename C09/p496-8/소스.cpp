#include <stdio.h>
#include <string.h>// strlen()함수
#define MAX 256
int main(void) {
	char pass[MAX] = "";
	int key = 0;
	size_t size;

	for (;;) {
		printf("문자열? ");
		scanf_s("%[^\n]s", &pass, MAX);

		// .입력시 프로그램 종료
		if (*pass == '.')
			break;

		printf("암호 키(정수)? ");
		scanf_s("%d", &key);

		getchar(); // 버퍼 비움

		// 문자열의 크기를 구함
		size = strlen(pass);

		// 문자열에 key를 더해 암호화
		for (size_t i = 0; i < size; i++) {
			if (pass[i] != ' ') {
				pass[i] = pass[i] + key;
			}
		}
		printf("암호화된 문자열: %s\n", pass);
	}
	return 0;
}