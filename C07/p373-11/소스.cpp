#include<stdio.h>
int main(void) {
	float arr[5][4], avg[4];
	float avg1;

	for (int i = 0; i < 5; i++) {
		printf("학생   %d번:", i + 1);
		for (int j = 0; j < 4; j++) {
			scanf_s("%f", &arr[i][j]);
			// 과목별로 최대 점수가 정해져 있다
			if ((j < 3) && (arr[i][j] > 30) || (j == 3) && (arr[i][j] > 10)) {
				printf("성적을 잘못 입력하였습니다.");
				return 0;
			}
		}
	}
	// 학생 개인의 평균 성적
	for (int c = 0; c < 4; c++) {
		avg[c] = (arr[0][c] + arr[1][c] + arr[2][c] + arr[3][c] + arr[4][c]) / 5;
	}
	printf("\n");
	for (int a = 0; a < 5; a++) {
		printf("학생   %d번: ", a + 1);
		avg1 = 0;
		for (int b = 0; b < 4; b++) {
			printf("%10.0f", arr[a][b]);
			avg1 = arr[a][b] + avg1;
			if (b == 3) {
				printf(" ==> %.0f\n", avg1);
			}
		}
		// 전체 학생의 과목별 평균 성적
		if (a == 4) {
			printf("\n항목별 평균: %10.2f%10.2f%10.2f%10.2f", avg[0], avg[1], avg[2], avg[3]);
		}
	}
	return 0;
}