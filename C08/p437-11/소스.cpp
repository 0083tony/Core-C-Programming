#include<stdio.h>
void get_rect_info(int* pa, int* pb) {
	int area, girth;

	// ����, �ѷ� ���
	area = (*pa) * (*pb);
	girth = (*pa + *pb) * 2;

	printf("����: %d, �ѷ�: %d", area, girth);
}
int main(void) {
	int a, b;

	printf("����? ");
	scanf_s("%d", &a);
	printf("����? ");
	scanf_s("%d", &b);

	int* pa = &a;
	int* pb = &b;

	// ������ pa,pb�� �Ű������� ����
	get_rect_info(pa, pb);

	return 0;
}