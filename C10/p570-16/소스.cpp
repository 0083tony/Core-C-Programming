#define _CRT_SECURE_NO_WARRINGS
#include <stdio.h>
#include <stdlib.h>
struct SONG {
	char title[30];
	char artist[30];
	int genre;
	int playtime;
};
enum Genre {
	ROCK, HIP_HOP, OST, BALLAD, DANCE
};
int main(void) {
	SONG A[8] = {
	{"Rain","SNO",2,243},
	{"TT","TWICE",4,213},
	{"Awake","BTS",1,226},
	{"����","�����",3,181},
	{"BIB","AC/DC",0,255},
	{"����","BTS",1,278},
	{"�Ƴ���","BTS",1,241},
	{"NAPA","miwa",2,281}
	};

	enum Genre B[5] = { ROCK, HIP_HOP, OST, BALLAD, DANCE };

	printf("���� \t��Ƽ��Ʈ \t�帣 \t����ð�\n");

	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 8; k++) {
			switch (B[i]) {
			case ROCK:
				if (ROCK == A[k].genre) {
					printf("%s	%s		ROCK	%d��\n", A[k].title, A[k].artist, A[k].playtime);
				}
				break;
			case HIP_HOP:
				if (HIP_HOP == A[k].genre) {
					printf("%s	%s		HIP_HOP	%d��\n", A[k].title, A[k].artist, A[k].playtime);
				}
				break;
			case OST:
				if (OST == A[k].genre) {
					printf("%s	%s		OST	%d��\n", A[k].title, A[k].artist, A[k].playtime);
				}
				break;
			case BALLAD:
				if (BALLAD == A[k].genre) {
					printf("%s	%s		BALLAD	%d��\n", A[k].title, A[k].artist, A[k].playtime);
				}
				break;
			case DANCE:
				if (DANCE == A[k].genre) {
					printf("%s	%s		DANCE	%d��\n", A[k].title, A[k].artist, A[k].playtime);
				}
				break;
			}
		}
	}
	return 0;
}