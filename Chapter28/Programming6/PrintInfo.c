#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Info.h"
#include "Search.h"
#include "AdminText.h"

extern void flushBuf();

static void printAllInfo(const Info* info, const int* infoNum)
{
	for (int i = 0; i < *infoNum; i++)
		printf("%d. Name: %s\tTel: %s\n", i + 1, info[i].name, info[i].tel);
}

static void searchInfo(const Info* info, const int* infoNum)
{
	char inputName[50];
	getName(inputName);
	int cnt = cntName(info, infoNum, inputName);
	int* idx = searchIdx(info, infoNum, inputName, cnt);

	if(cnt == 0)
		puts("The information you entered could not be found :(");

	else
	{
		for (int i = 0; i < cnt; i++)
		{
			printf("%d. Name: %s\tTel: %s\n", i + 1, info[idx[i]].name, info[idx[i]].tel);
		}
	}

	free(idx);
}

void printSearchInfo(const Info** info, const int* infoNum)
{
	if (*infoNum == 0)
		puts("No data to search");

	else if (*infoNum > 0)
		searchInfo(*info, infoNum);

	else
	{
		puts("Soory, Program error!	:(");
		puts("Program termination	:(");
		adminText(&info, &infoNum, 'S');
		exit(100);
	}
}

void printInfo(const Info** info, const int* infoNum)
{
	if (*infoNum == 0)
		puts("No data to print");

	else if (*infoNum > 0)
		printAllInfo(*info, infoNum);

	else
	{
		puts("Soory, Program error!	:(");
		puts("Program termination	:(");
		adminText(&info, &infoNum, 'S');
		exit(100);
	}
}