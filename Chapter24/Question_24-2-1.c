#include <stdio.h>

int main()
{
	int fpSize = 0;
	int fpos;
	char ch;

	FILE* fp = fopen("text.txt", "rt");
	if (fp == NULL)
	{
		fputs("file open fail !!!\n", stdout);
		return -1;
	}
	for (int i = 0; (ch = fgetc(fp)) != EOF; i++)
	{
		fpos = ftell(fp);
		fseek(fp, fpos, SEEK_SET);
		fpSize += sizeof(fgetc(fp));
	}
	fseek(fp, 0, SEEK_SET);
	printf("%d\n", fpSize);
	fclose(fp);
	return 0;
}