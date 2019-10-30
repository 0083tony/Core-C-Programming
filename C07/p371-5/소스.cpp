#include<stdio.h>
int main(void) {
	int arr[10]{ 23,45,62,12,99,83,23,50,12,37 };
	int num;

	printf("배열: ");

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n찾을 값? ");
	scanf_s("%d", &num);

	for (int i = 9; i >= 0; --i) {
		// 배열에 저장된 수를 역순으로 n과 비교
		if (arr[i] == num) {
			// arr[]는 0부터 값이 저장되므로 i+1번째에 저장된 수
			printf("%d 는 %d번째 원소입니다.", arr[i], i + 1);
			// 중복 출력 방지를 위해 원소를 찾으면 프로그램 종료
			return 0;
		}
	}
}