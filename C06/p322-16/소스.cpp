#include<stdio.h>
int is_bit_set(int num,int pos) {
	// pos번째 비트의 값을 찾고, 조건 연산
	if (((num & (1 << (pos - 1))) ? 1 : 0) == 0) {
		return 0;
	}
	else if (((num & (1 << (pos - 1))) ? 1 : 0) == 1) {
		return 1;
	}
	else return -1;
}
int main(void) {
	int num;
	int count = 0;

	printf("정수? ");
	scanf_s("%x", &num);
	printf("%X: ", num);

	for (int i = 32; i > 0; i--) {
		printf("%d", is_bit_set(num, i));
		count++;
		// 4bit 출력시 칸 띄우기, count 초기화 
		if (count == 4) {
			printf(" ");
			count = 0;
		}
	}
	return 0;
}