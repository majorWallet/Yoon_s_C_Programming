#include <stdio.h>
#include "stbook.h"

void flushStdoutBuf()
{
	while (getchar() != '\n');
}

int main()
{
	BookInfo bookInfoArr[3];
	printf("���� ���� �Է�\n");
	for (int i = 0; i < 3; i++)
	{
		printf("����: ");
		scanf_s("%s", bookInfoArr[i].author, sizeof(bookInfoArr[i].author));
		flushStdoutBuf();
		printf("����: ");
		scanf_s("%s", bookInfoArr[i].title, sizeof(bookInfoArr[i].title));
		flushStdoutBuf();
		printf("������ ��: ");
		scanf_s("%s", bookInfoArr[i].pgs, sizeof(bookInfoArr[i].pgs));
		flushStdoutBuf();
	}
	printf("���� ���� ���\n");
	for (int i = 0; i < 3; i++)
	{
		printf("����: %s\n", bookInfoArr[0].author);
		printf("����: %s\n", bookInfoArr[0].title);
		printf("������ ��: %s\n", bookInfoArr[0].pgs);
	}
	return 0;
}