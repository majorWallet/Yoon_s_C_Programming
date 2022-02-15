#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getText(char* text, int len, FILE** fp);

int main()
{
	FILE* fp1 = fopen("text1.txt", "rt");
	FILE* fp2 = fopen("text2.txt", "rt");
	char text1[200];
	char text2[200];
	getText(text1, sizeof(text1), &fp1);
	getText(text2, sizeof(text2), &fp2);

	if (!strcmp(text1, text2))
		printf("두 개의 파일은 완전히 일치합니다.\n");
	else
		printf("두 개의 파일은 일치하지 않습니다.\n");

	return 0;
}

void getText(char* text, int len, FILE** fp)
{
	if (*fp == NULL)
		return -1;
	char ch;
	int i = 0;
	while ((ch = fgetc(*fp)) != EOF)
	{
		text[i] = ch;
		i++;
	}
	text[i] = '\0';
	fclose(*fp);
}