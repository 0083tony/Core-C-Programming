#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void* a, const void* b) {
	return (strcmp((char*)a, (char*)b));
}
int main(void) {
	char key_word[20];
	char fixed_title[20];
	char MOVIE[5][20] = {
	{"Avengers"},
	{"MI:Fallout"},
	{"Ant-Man"},
	{"Bohemian Rhapsody"},
	{"Insidious"}
	};
	qsort((void*)MOVIE, 5, sizeof(MOVIE[0]), compare);
	printf("<<영화 목록>>\n");
	for (int i = 0; i < 5; i++) {
		printf("%s\n", MOVIE[i]);
	}
	printf("제목? ");
	scanf_s("%s", key_word, 20);
	char* found = (char*)bsearch(key_word, MOVIE, 5, 20, compare);
	getchar();
	for (int i = 0; i < 5; i++) {
		if (*found == *MOVIE[i]) {
			printf("수정할 제목? ");
			scanf_s("%s", MOVIE[i], 20);
			goto A;
		}
	}
A:
	printf("\n");
	qsort((void*)MOVIE, 5, sizeof(MOVIE[0]), compare);
	printf("<<영화 목록>>\n");
	for (int i = 0; i < 5; i++) {
		printf("%s\n", MOVIE[i]);
	}
}