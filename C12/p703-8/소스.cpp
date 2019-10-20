#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100
int main(void) {
	char text_filename_A[SIZE];
	char text_filename_B[SIZE];
	char A, B;
	FILE* fpA;
	FILE* fpB;
	// 파일의 이름을 입력받음
	printf("원본 파일? ");
	scanf("%s", text_filename_A);
	printf("타겟 파일? ");
	scanf("%s", text_filename_B);
	// 파일을 불러옴
	fpA = fopen(text_filename_A, "r");
	fpB = fopen(text_filename_B, "r");
	// 파일 불러오기 실패시 Error! 출력과 함께 종료
	if (fpA == NULL || fpB == NULL) {
		printf("Error!\n");
		return 1;
	}
	for (;;) {
		if (feof(fpA) == 0 && feof(fpB) == 0) {
			// 파일에 저장된 문자를 한 문자씩 A,B로 전달
			A = fgetc(fpA);
			B = fgetc(fpB);
			// foeof() 함수를 사용해 비교
			if (A != B) {
				printf("두 파일은 다릅니다.\n");
				break;
			}
			else if (feof(fpA) != 0 && feof(fpB) == 0) {
				printf("두 파일은 다릅니다.\n");
				break;
			}
			else if (feof(fpA) == 0 && feof(fpB) != 0) {
				printf("두 파일은 다릅니다.\n");
				break;
			}
			else {
				printf("두 파일이 같습니다.\n");
				break;
			}
		}
	}
	fclose(fpA);
	fclose(fpB);
}