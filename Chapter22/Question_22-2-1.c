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
		fputs("�̸�: ", stdout);
		fgets(eArr[i].name, 30, stdin);
		eArr[i].name[strlen(eArr[i].name) - 1] = '\0';
		fputs("�ֹε�Ϲ�ȣ: ", stdout);
		fgets(eArr[i].ID, 30, stdin);
		eArr[i].ID[strlen(eArr[i].ID) - 1] = '\0';
		fputs("�޿�: ", stdout);
		fgets(eArr[i].payment, 30, stdin);
		eArr[i].payment[strlen(eArr[i].payment) - 1] = '\0';
	}
	for (int i = 0; i < 3; i++)
	{
		fputs("�̸�: ", stdout);
		fputs(eArr[i].name, stdout);
		fputs("\n", stdout);
		fputs("�ֹε�Ϲ�ȣ: ", stdout);
		fputs(eArr[i].ID, stdout);
		fputs("\n", stdout);
		fputs("�޿�: ", stdout);
		fputs(eArr[i].payment, stdout);
		fputs("\n", stdout);
	}
	return 0;
}