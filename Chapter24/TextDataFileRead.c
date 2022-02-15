#include <stdio.h>

int main()
{
	char str[30];
	int ch;
	FILE* fp = fopen("simple.txt", "rt");
	if (fp == NULL)
	{
		fputs("파일오픈 실패!\n", stdout);
		return -1;
	}

	ch = fgetc(fp);
	printf("%c\n", ch);
	ch = fgetc(fp);
	printf("%c\n", ch);

	fgets(str, sizeof(str) / sizeof(char), fp);
	printf("%s", str);
	fgets(str, sizeof(str) / sizeof(char), fp);
	printf("%s", str);

	fclose(fp);
	return 0;
}