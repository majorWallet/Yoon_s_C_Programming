#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Info.h"

static Info* loadText(const Info* info, int* infoNum)
{
	FILE* lt = fopen("text.txt", "rt");
	char str[50];

	while (fgets(str, sizeof(str), lt) != NULL)
	{
		(*infoNum)++;
	}

	if ((*infoNum) <= 1)
	{
		fclose(lt);
		return NULL;
	}

	else
	{
		(*infoNum) /= 2;
		Info* infoArr = (Info*)calloc(*infoNum, sizeof(Info));
		if (infoArr == NULL)
		{
			puts("Failed to load Information");
			puts("Program termination	:(");
			exit(100);
		}
		else
		{
			int cnt;
			int idx;
		retry:
			fseek(lt, 0, SEEK_SET);
			cnt = 0;
			idx = 0;

			do
			{
				fgets(str, sizeof(str), lt);
				str[strlen(str) - 1] = '\0';

				if (cnt % 2 == 0)
				{
					strcpy(infoArr[idx].name, str);
				}

				else if (cnt % 2 == 1)
				{
					strcpy(infoArr[idx].tel, str);
					idx++;
				}

				else
					goto retry;

				cnt++;
			} while (cnt < (*infoNum) * 2);

			fclose(lt);

			return infoArr;
		}
	}
}

static void saveText(const Info* info, const int* infoNum)
{
	FILE* st = fopen("text.txt", "wt");
	for (int i = 0; i < *infoNum; i++)
	{
		fputs(info[i].name, st);
		fputs("\n", st);
		fputs(info[i].tel, st);
		fputs("\n", st);
		fflush(st);
	}
	fclose(st);
}

void adminText(const Info** info, const int* infoNum, char LS)
{
	if (LS == 'L')
		*info = loadText(*info, infoNum);

	else if (LS == 'S')
		saveText(*info, infoNum);

	else
	{
		puts("Soory, Program error!	:(");
		puts("Program termination	:(");
		exit(100);
	}
}