#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h> //time()�Լ� 

// 1 == yes || 0 == no
#define USE_USA_FORMAT 1

// 1 == set_as_today || 0 == is_same_date
#define TODAY_OR_SAME_DAY 1

struct DATE {
	int year;
	int month;
	int date;
};

// ������ ��¥�� ���ϴ� �Լ�
struct DATE set_as_today(void) {
	time_t t = time(NULL);
	struct tm* today = localtime(&t);
	struct DATE ti;
	ti.year = today->tm_year + 1900;
	ti.month = today->tm_mon + 1;
	ti.date = today->tm_mday;
	return ti;
}

// ���� �������� ����ϴ� �Լ�
void printf_date_USA(struct DATE ti) {
	char month[12][5]{
		"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sept","Oct","Nov","Dec"
	};
	for (size_t i = 0; i < 12; i++) {
		if (ti.month == i + 1) {
			printf("%s %d %d", month[i], ti.date, ti.year);
		}
	}
}

// �Է¹��� ��¥�� ���� �Ǿ��ִ� ��¥�� ���ϴ� �Լ�
void is_same_date(struct DATE hld, struct DATE input) {
	// USE_USA_FORMAT == 0 �̸� ���ڷ� �� �� �� ���
#if(USE_USA_FORMAT == 0)
	if ((hld.year == input.year) && (hld.month == input.month) && (hld.date == input.date)) {
		printf("%d/%d/%d�� ������ �Դϴ�.\n", input.year, input.month, input.date);
	}
	else printf("%d/%d/%d�� �������� �ƴմϴ�.\n", input.year, input.month, input.date);
#endif
	// USE_USA_FORMAT == 1 �̸� ���� �������� ���
# if(USE_USA_FORMAT == 1)
	if ((hld.year == input.year) && (hld.month == input.month) && (hld.date == input.date)) {
		printf_date_USA(input);
		printf("�� ������ �Դϴ�.\n");
	}
	else {
		printf_date_USA(input);
		printf("�� �������� �ƴմϴ�.\n");
	}
#endif
}

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