#include <stdio.h>

int main()
{
	char ch;
	FILE* fp = fopen("data.txt", "rt");
	if (fp == NULL)
	{
		fputs("파일오픈 실패!\n", stdout);
		return -1;
	}

	for (int i = 0; i < 3; i++)
	{
		ch = fgetc(fp);
		printf("%c\n", ch);
	}
	fclose(fp);
	return 0;
}