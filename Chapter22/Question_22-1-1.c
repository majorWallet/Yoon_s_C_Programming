#include <stdio.h>

struct employee
{
	char name[30];
	char ID[30];
	char payment[30];
};

int main()
{
	struct employee e1;
	fgets(e1.name, 30, stdin);
	e1.name[strlen(e1.name) - 1] = '\0';
	fgets(e1.ID, 30, stdin);
	e1.ID[strlen(e1.ID) - 1] = '\0';
	fgets(e1.payment, 30, stdin);
	e1.payment[strlen(e1.payment) - 1] = '\0';
	fputs("이름: ", stdout);
	fputs(e1.name, stdout);
	fputs("\n", stdout);
	fputs("주민등록번호: ", stdout);
	fputs(e1.ID, stdout);
	fputs("\n", stdout);
	fputs("급여: ", stdout);
	fputs(e1.payment, stdout);
	fputs("\n", stdout);
}