#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void* a, const void* b) {
	return (strcmp((char*)a, (char*)b));
}
int main(void) {
	char MOVIE[5][20] = {
	{"Avengers"},
	{"MI:Fallout"},
	{"Ant-Man"},
	{"Bohemian Rhapsody"},
	{"Insidious"}
	};
	printf("<<���� ��>>\n");
	for (int i = 0; i < 5; i++) {
		printf("%s\n", MOVIE[i]);
	}
	qsort((void*)MOVIE, 5, sizeof(MOVIE[0]), compare);
	printf("\n<<���� ��>>\n");
	for (int i = 0; i < 5; i++) {
		printf("%s\n", MOVIE[i]);
	}
}