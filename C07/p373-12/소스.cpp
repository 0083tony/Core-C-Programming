#include<stdio.h>
int main(void) {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int a = 0, add = 0, n = 0;

	for (;;) {
		for (int i = 0; i < 9; i++) {
			printf("현재 좌석: ");
			// 예매된 좌석의 수 만큼 X 출력
			if (add != 0) {
				for (int j = 0; j < add; j++) {
					printf("X ");
				}
			}
			// 예매 가능한 좌석의 수 만큼 O 출력
			for (int k = 0; k < (10 - add); k++) {
				printf("O ");
			}
			printf("\n예매할 좌석수? ");
			scanf_s("%d", &a);
			add = a + add;
			// 예매된 좌석의 번호 출력
			for (int l = 0; l < a; l++) {
				n++;
				printf("%d ", arr[n - 1]);
			}
			printf("번 좌석을 예매했습니다.\n");

			if (add == 10)
				// 전 좌석이 매진되면 프로그램 종료
				return 0;
		}
	}
}