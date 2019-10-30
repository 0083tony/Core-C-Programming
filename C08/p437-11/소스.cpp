#include<stdio.h>
void get_rect_info(int* pa, int* pb) {
	int area, girth;

	// 넓이, 둘레 계산
	area = (*pa) * (*pb);
	girth = (*pa + *pb) * 2;

	printf("넓이: %d, 둘레: %d", area, girth);
}
int main(void) {
	int a, b;

	printf("가로? ");
	scanf_s("%d", &a);
	printf("세로? ");
	scanf_s("%d", &b);

	int* pa = &a;
	int* pb = &b;

	// 포인터 pa,pb를 매개변수로 전달
	get_rect_info(pa, pb);

	return 0;
}