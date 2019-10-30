#include<stdio.h>
#define MAX 256 // MAX�� 256���� ����
void check_time_str(char* time) {
	int T = 0;

	if (time[0] >= '0' && time[0] <= '2') { // hour
		if (time[1] >= '0' && time[1] <= '9')
			T++;
		if (time[0] == '2' && time[1] >= '5')
			T--;
		if (time[2] >= '0' && time[2] <= '5') { //min
			if (time[3] >= '0' && time[3] <= '9')
				T++;
		}
		if (time[4] >= '0' && time[4] <= '5') { //sec
			if (time[5] >= '0' && time[5] <= '9')
				T++;
		}
	}
	if (time[0] == '2' && time[1] == '4') { // if time over 24:00:00 false
		if (time[2] != '0' || time[3] != '0' || time[4] != '0' || time[5] != '0')
			T++;
	}
	if (T != 3) {
		printf("�߸� �Է��߽��ϴ�. hhmmss�������� �Է��ϼ���.\n");
	}
	else
		printf("%s�� ��ȿ�� �ð��Դϴ�.\n", time);
}
int main(void) {
	char time[MAX];

	for (;;) {
		printf("�ð�(. �Է� �� ����)? ");
		scanf_s("%s", &time, MAX);

		// .�� �Է��ϸ� ���α׷� ����
		if (*time == '.')
			break;

		// �Է¹��� ���ڿ� time�� �Ű������� ����
		check_time_str(time);
	}
	return 0;
}