#include <stdio.h>
#include "stbook.h"

void flushStdoutBuf()
{
	while (getchar() != '\n');
}

int main()
{
	BookInfo bookInfoArr[3];
	printf("도서 정보 입력\n");
	for (int i = 0; i < 3; i++)
	{
		printf("저자: ");
		scanf_s("%s", bookInfoArr[i].author, sizeof(bookInfoArr[i].author));
		flushStdoutBuf();
		printf("제목: ");
		scanf_s("%s", bookInfoArr[i].title, sizeof(bookInfoArr[i].title));
		flushStdoutBuf();
		printf("페이지 수: ");
		scanf_s("%s", bookInfoArr[i].pgs, sizeof(bookInfoArr[i].pgs));
		flushStdoutBuf();
	}
	printf("도서 정보 출력\n");
	for (int i = 0; i < 3; i++)
	{
		printf("저자: %s\n", bookInfoArr[0].author);
		printf("제목: %s\n", bookInfoArr[0].title);
		printf("페이지 수: %s\n", bookInfoArr[0].pgs);
	}
	return 0;
}