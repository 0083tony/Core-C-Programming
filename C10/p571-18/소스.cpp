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
	{"아낙","BTS","HIP_HOP",241},
	{"NAPA","Miwa","OST",281}
	};

	SONG* playlist[5] = { NULL };
	int n = 0, m = 0;

	printf(" 제목\t아티스트\t장르\t재생시간\n");

	for (int i = 0; i < 8; i++) {
		printf("%d:%s\t%s\t\t%s\t%d초\n", i + 1, A[i].title, A[i].artist, A[i].genre, A[i].playtime);
	}

	for (;;) {
	start:
		int playtime = 0;

		printf("\n플레이리스트에 추가할 곡 번호? ");
		scanf_s("%d", &n);

		if (n == 0) {
			break;
		}
		if (n > 8) {
			printf("잘못된 곡 번호입니다.\n");
			goto start;
		}

		playlist[m] = &A[n - 1];
		m++;

		printf("<< 플레이리스트 >>\n");

		for (int i = 0; i < m; i++) {
			printf("%s\t%s\t\t%s\t%d초\n", (*playlist[i]).title, (*playlist[i]).artist, (*playlist[i]).genre, (*playlist[i]).playtime);
			playtime = playtime + (*playlist[i]).playtime;
		}

		printf("총 재생시간: %d초\n", playtime);
	}
	return 0;
}