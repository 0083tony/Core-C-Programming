#include<stdio.h>
#include<math.h> // pow()�Լ�
int round_pos(int n) {
	int a = 0;

	a = pow(10, n); // 10�� n��
	// 1�� �ڸ����� �ݿø� �˰��� == (X + 5) / 10 * 10
	return (((1357 + (5 * a)) / (10 * a)) * (10 * a));
}
int main(void) {

	for (int n = 0; n < 3; n++)
		printf("%d��° �ڸ����� �ݿø��� ���: %d\n", n, round_pos(n));
	
	return 0;
}