#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100
int main(void) {
	int arr[4];
	int price[3] = { 4000,4500,5000 };
	char menu[4][SIZE] = {
		{"아메리카노"},
		{"카페라떼"},
		{"플랫화이트"},
		{"결제 금액"}
	};
	FILE* fp;
	fp = fopen("receipt.txt", "w");
	for (;;) {
		// 메뉴를 출력하고 주문을 받음
		printf("[메뉴] %5s:%d, %5s:%d, %5s:%d\n", menu[0], price[0], menu[1], price[1], menu[2], price[2]);
		printf("%-10s 수량? ", menu[0]);
		scanf("%d", &arr[0]);
		printf("%-10s 수량? ", menu[1]);
		scanf("%d", &arr[1]);
		printf("%-10s 수량? ", menu[2]);
		scanf("%d", &arr[2]);
		arr[3] = (arr[0] * 4000) + (arr[1] * 4500) + (arr[2] * 5000);
		printf("%-10s: %d\n", menu[3], arr[3]);
		// arr[3]의 금액이 0일때 break해도 같은 결과
		if ((arr[0] == 0) && (arr[1] == 0) && (arr[2] == 0))
			break;
		// receipt.txt 파일을 열고 주문받은 내용을 토대로 계산서 출력
		
		fputs("제품명		단가	수량	금액\n", fp);
		fputs("--------------------------------------------------\n", fp);
		// 주문 받은 수가 0인 메뉴는 출력하지 않음
		if (arr[0] != 0)
			fprintf(fp, "%-10s	%d	%4d	%4d\n", menu[0], price[0], arr[0], arr[0] * price[0]);
		if (arr[1] != 0)
			fprintf(fp, "%-10s	%d	%4d	%4d\n", menu[1], price[1], arr[1], arr[1] * price[1]);
		if (arr[2] != 0)
			fprintf(fp, "%-10s	%d	%4d	%4d\n", menu[2], price[2], arr[2], arr[2] * price[2]);
		fputs("--------------------------------------------------\n", fp);
		fprintf(fp, "%-10s:%35d\n\n", menu[3], arr[3]);
	}
	fclose(fp);
	return 0;
}