#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct SONG {
	char title[30];
	char artist[30];
	char genre[30];
	int playtime;
};
int main(void) {
	SONG A[8] = {
	{"Rain","SNO","HIP_HOP",243},
	{"TT","TWICE","DANCE",213},
	{"Awake","BTS","HIP_HOP",226},
	{"봄비","장범준","BALLAD",181},
	{"BIB","AC/DC","ROCK",255},
	{"봄날","BTS","HIP_HOP",278},
	{"아낙네","BTS","HIP_HOP",241},
	{"NAPA","miwa","OST",281}
	};

	char kw[20];

	for (;;) {
		printf("키워드(제목/아티스트)? ");
		scanf_s("%[^\n]s", kw, 20);

		if (*kw == '.') {
			break;
		}

		for (int i = 0; i < 8; i++) {
			int N = _strcmpi(A[i].title, kw);
			if (N == 0) {
				printf("%s	%s	%s	%d초\n", A[i].title, A[i].artist, A[i].genre, A[i].playtime);
			}
			int M = _strcmpi(A[i].artist, kw);
			if (M == 0) {
				printf("%s	%s	%s	%d초\n", A[i].title, A[i].artist, A[i].genre, A[i].playtime);
			}
		}
		getchar();
	}
	return 0;
}