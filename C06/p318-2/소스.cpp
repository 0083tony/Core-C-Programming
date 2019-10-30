#include<stdio.h>
float get_area_of_squarer(float a) {
	// 정사각형의 면적 = 한변의 길이 * 한변의 길이
	return a * a;
}
int main(void) {
	float a;

	printf("한 변의 길이? ");
	scanf_s("%f", &a);

	printf("정사각형의 면적: %f", get_area_of_squarer(a));

	return 0;
}