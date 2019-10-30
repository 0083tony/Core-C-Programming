#include<stdio.h>
#define MAX 256
void check_phone_str(char* phone) {
	int T = 0;

	/* ���ڿ��� ����� ���ڰ� �ùٸ� �������� �˻�
	index0,1,2�� ����� ���ڰ� 0,1,0���� Ȯ��*/
	if (phone[0] == '0' && phone[1] == '1' && phone[2] == '0') {
		for (int i = 3; i <= 10; i++) {
			// 0~9 ������ ���ڰ� ������ T++
			if (phone[i] >= '0' && phone[i] <= '9')
				T++;
		}
	}

	// ��ȭ��ȣ�� 8�ڸ�
	if (T == 8)
		printf("%s�� ��ȿ�� ��ȭ��ȣ�Դϴ�.\n", phone);
	else
		printf("�߸� �Է��߽��ϴ�. 01012345678 �������� �Է��ϼ���.\n");
}
int main(void) {
	char phone[MAX];

	for (;;) {
		printf("��ȭ��ȣ(. �Է� �� ����)? ");
		scanf_s("%s", &phone, MAX);

		// .�Է½� ���α׷� ����
		if (*phone == '.')
			break;

		check_phone_str(phone);
	}
	return 0;
}