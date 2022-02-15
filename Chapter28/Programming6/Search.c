#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Info.h"
#include "AdminText.h"

extern void flushBuf();

void getName(char* inputName)
{
	fputs("Input searching name: ", stdout);
	scanf("%s", inputName);
	flushBuf();
	return inputName;
}

int cntName(const Info* info, const int* infoNum, const char* inputName)
{
	int cnt = 0;

	for (int i = 0; i < *infoNum; i++)
		if (!strcmp(info[i].name, inputName))
			cnt++;

	return cnt;
}

int* searchIdx(const Info* info, const int* infoNum, const char* inputName, const int cnt)
{
	if (cnt == 0)
		return NULL;

	else if (cnt > 0)
	{
		int* idxArr = (int*)calloc(cnt, sizeof(int));

		if (idxArr == NULL)
		{
			puts("Heap area memory allocation error");
			puts("Program termination	:(");
			exit(100);
		}

		else
		{
			int j = 0;
			for (int i = 0; i < *infoNum; i++)
			{
				if (!strcmp(info[i].name, inputName))
				{
					idxArr[j] = i;
					j++;
				}
			}
			return idxArr;
		}
	}

	else
	{
		puts("Soory, Program error!	:(");
		puts("Program termination	:(");
		adminText(&info, &infoNum, 'S');
		exit(100);
	}
}