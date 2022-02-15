#include <stdio.h>
#include <string.h>

struct employee
{
	char name[30];
	char ID[30];
	char payment[30];
};

int main()
{
	struct employee eArr[3];
	for (int i = 0; i < 3; i++)
	{
		fputs("이름: ", stdout);
		fgets(eArr[i].name, 30, stdin);
		eArr[i].name[strlen(eArr[i].name) - 1] = '\0';
		fputs("주민등록번호: ", stdout);
		fgets(eArr[i].ID, 30, stdin);
		eArr[i].ID[strlen(eArr[i].ID) - 1] = '\0';
		fputs("급여: ", stdout);
		fgets(eArr[i].payment, 30, stdin);
		eArr[i].payment[strlen(eArr[i].payment) - 1] = '\0';
	}
	for (int i = 0; i < 3; i++)
	{
		fputs("이름: ", stdout);
		fputs(eArr[i].name, stdout);
		fputs("\n", stdout);
		fputs("주민등록번호: ", stdout);
		fputs(eArr[i].ID, stdout);
		fputs("\n", stdout);
		fputs("급여: ", stdout);
		fputs(eArr[i].payment, stdout);
		fputs("\n", stdout);
	}
	return 0;
}