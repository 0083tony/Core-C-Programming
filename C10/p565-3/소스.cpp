#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
typedef struct Login {
	char ID[20];
	char Password[20];
} Login;
int main() {
	char ID[20];
	char Password[20];

	Login arr[5] = {
	{"C#","C++"},
	{"Node.js","MySQL"},
	{"html","css"},
	{"JQuery","React.js"},
	{"Git","Github"}
	};

	for (;;) {
		printf("ID? ");
		scanf("%s", ID);

		if (*ID == '.')break;

		getchar();

		printf("Password? ");
		scanf("%s", Password);

		for (size_t i = 0; i < 5; i++) {
			if (*ID == *arr[i].ID) {
				if (*Password == *arr[i].Password) {
					printf("로그인 성공\n");
				}
			}
		}
	}
	return 0;
}