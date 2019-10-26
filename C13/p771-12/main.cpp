#include "myheader.h"

int main(void) {
	struct DATE hld[2] = { 2019,1,1 }; // ������ ����
	struct DATE input;
	struct DATE ti;

	// TODAY_OR_SAME_DAY == 1 �϶� ���� ��¥�� ��� USE_USA_FORMAT == 1 �̸� ���� ����, 0 �϶��� ����
#if(TODAY_OR_SAME_DAY == 1)
	ti = set_as_today();

#if(USE_USA_FORMAT == 1)
	printf("Today is ");
	printf_date_USA(ti);
#else
	printf("������ %d/%d/%d �Դϴ�.\n", ti.year, ti.month, ti.date);
#endif
#endif

	// TODAY_OR_SAME_DAY == 0 �϶� ��¥�� �Է¹޾� �� USE_USA_FORMAT == 1 �̸� ���� ����, 0 �϶��� ����
#if(TODAY_OR_SAME_DAY == 0)
	for (;;) {
		printf("��¥(�� �� ��)? ");
		scanf("%d %d %d", &input.year, &input.month, &input.date);
		if ((input.year == 0) && (input.month == 0) && (input.date == 0)) {
			break;
		}
		is_same_date(*hld, input);
	}
#endif
}