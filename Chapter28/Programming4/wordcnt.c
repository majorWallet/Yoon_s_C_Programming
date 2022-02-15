#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct APCnt
{
	int Acnt;
	int Pcnt;
} APCnt;


void cntWord(char* text, int len, APCnt* cnt);
void getText(char* text, int len);


int main()
{
	char originalText[200];
	getText(originalText, sizeof(originalText));
	APCnt APcnt = { 0, 0 };
	cntWord(originalText, strlen(originalText), &APcnt);
	printf("A로 시작하는 단어의 수: %d\n", APcnt.Acnt);
	printf("P로 시작하는 단어의 수: %d\n", APcnt.Pcnt);
	return 0;
}

void getText(char* text, int len)
{
	FILE* fp = fopen("text.txt", "rt");
	if (fp == NULL)
		return -1;
	char ch;
	int i = 0;
	while ((ch = fgetc(fp)) != EOF)
	{
		text[i] = ch;
		i++;
	}
	text[i] = '\0';
	fclose(fp);
}

void cntWord(char* text, int len, APCnt* cnt)
{
	if (text[0] == 'A')
		(*cnt).Acnt++;
	else if (text[0] == 'P')
		(*cnt).Pcnt++;
	for (int i = 0; i < len-1; i++)
	{
		if ((text[i] == ' ' || text[i] == '\n' || text[i] == '\t') && (text[i + 1] == 'A'))
			(*cnt).Acnt++;
		else if ((text[i] == ' ' || text[i] == '\n' || text[i] == '\t') && (text[i + 1] == 'P'))
			(*cnt).Pcnt++;
	}
	return cnt;
}