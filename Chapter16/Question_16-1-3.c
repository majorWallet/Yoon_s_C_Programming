#include <stdio.h>

int main()
{
	int gradeArr[5][5];

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			gradeArr[i][j] = 0;

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			scanf_s("%d", &gradeArr[i][j]);

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
		{
			gradeArr[i][4] += gradeArr[i][j];
			gradeArr[4][4] += gradeArr[i][j];
		}

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			gradeArr[4][i] += gradeArr[j][i];

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			printf("%d ", gradeArr[i][j]);
		printf("\n");
	}

	return 0;
}