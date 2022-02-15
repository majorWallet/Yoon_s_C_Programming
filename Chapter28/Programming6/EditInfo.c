#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Info.h"
#include "Search.h"
#include "AdminText.h"

extern void flushBuf();

static void backupInfo(Info* backupInfoArr, Info* prevInfoArr, int* infoNum)
{
	for (int i = 0; i < *infoNum; i++)
		backupInfoArr[i] = prevInfoArr[i];
}

static Info* initInsertInfo(int* infoNum)
{
	(*infoNum)++;
	Info info;

	fputs("Input name: ", stdout);
	scanf("%s", info.name);
	flushBuf();
	fputs("Input tel number: ", stdout);
	scanf("%s", info.tel);
	flushBuf();

	Info* infoArr = (Info*)calloc(*infoNum, sizeof(Info));
	if (infoArr == NULL)
	{
		(*infoNum)--;
		puts("Soory, Program error!	:(");
		puts("Data inserting failed	:(");
		return NULL;
	}

	else
	{
		strcpy(infoArr[*infoNum - 1].name, info.name);
		strcpy(infoArr[*infoNum - 1].tel, info.tel);
		puts("			Data Inserted");
		return infoArr;
	}
}

static Info* updateInsertInfo(const Info* prevInfoArr, int* infoNum)
{
	Info info;
	Info* backupInfoArr = (Info*)calloc(*infoNum, sizeof(Info));

	if (backupInfoArr == NULL)
	{
		puts("Soory, Program error!	:(");
		return prevInfoArr;
	}

	else
		backupInfo(backupInfoArr, prevInfoArr, infoNum);

	(*infoNum)++;

	fputs("Input name: ", stdout);
	scanf("%s", info.name);
	flushBuf();
	fputs("Input tel number: ", stdout);
	scanf("%s", info.tel);
	flushBuf();

	Info* newInfoArr = (Info*)realloc(prevInfoArr, sizeof(Info) * (*infoNum));

	if (newInfoArr == NULL)
	{
		(*infoNum)--;
		puts("Soory, Program error!	:(");
		puts("Data inserting failed	:(");
		return backupInfoArr;
	}

	else
	{
		free(backupInfoArr);
		strcpy((newInfoArr[*infoNum - 1]).name, info.name);
		strcpy((newInfoArr[*infoNum - 1]).tel, info.tel);
		puts("			Data Inserted");
		return newInfoArr;
	}
}

static Info* delInfo(const Info* prevInfoArr, int* infoNum)
{
	char inputName[50];
	getName(inputName);
	int cnt = cntName(prevInfoArr, infoNum, inputName);
	int* idx = searchIdx(prevInfoArr, infoNum, inputName, cnt);
	int delNum = 0;

	if (cnt == 0)
	{
		puts("The information you entered could not be found :(");
		free(idx);
		return prevInfoArr;
	}

	else
	{
		for (int i = 0; i < cnt; i++)
			printf("%d. Name: %s\tTel: %s\n", i + 1, prevInfoArr[idx[i]].name, prevInfoArr[idx[i]].tel);

		fputs("Enter the number to delete: ", stdout);
		scanf("%d", &delNum);
		flushBuf();

		if (delNum < 1 || delNum > cnt)
		{
			puts("Enter only the number shown");
			return prevInfoArr;
		}

		Info* backupInfoArr = (Info*)calloc(*infoNum, sizeof(Info));
		if (backupInfoArr == NULL)
		{
			puts("Soory, Program error!	:(");
			return prevInfoArr;
		}

		else
			backupInfo(backupInfoArr, prevInfoArr, infoNum);

		for (int i = 0; i < *infoNum; i++)
		{
			if (idx[delNum - 1] < i)
			{
				strcpy((prevInfoArr[i - 1]).name, prevInfoArr[i].name);
				strcpy((prevInfoArr[i - 1]).tel, prevInfoArr[i].tel);
			}
		}

		(*infoNum)--;
		free(idx);
		Info* newInfoArr = (Info*)realloc(prevInfoArr, sizeof(Info) * (*infoNum));

		if (newInfoArr == NULL && (*infoNum) != 0)
		{
			(*infoNum)++;
			puts("Soory, Program error!	:(");
			puts("Data deleting failed	:(");
			return backupInfoArr;
		}

		else
		{
			free(backupInfoArr);
			puts("			Data deleted");
			return newInfoArr;
		}
	}
}

void insertInfo(const Info** info, const int* infoNum)
{
	if (*infoNum == 0)
		*info = initInsertInfo(infoNum);

	else if (*infoNum > 0)
		*info = updateInsertInfo(*info, infoNum);

	else
	{
		puts("Soory, Program error!	:(");
		puts("Program termination	:(");
		adminText(&info, &infoNum, 'S');
		exit(100);
	}
}

void deleteInfo(const Info** info, const int* infoNum)
{
	if (*infoNum == 0)
		puts("No data to delete");

	else if (*infoNum > 0)
		*info = delInfo(*info, infoNum);

	else
	{
		puts("Soory, Program error!	:(");
		puts("Program termination	:(");
		adminText(&info, &infoNum, 'S');
		exit(100);
	}
}