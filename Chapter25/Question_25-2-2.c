#include <stdio.h>
#include <stdlib.h>

int main()
{	int cnt = 0;
	int lim = 4;
	int* numArr = (int*)calloc(sizeof(int), (lim + 1));
	if (numArr == NULL)
		return -1;
	do
	{
		scanf("%d", &numArr[cnt]);
		cnt++;
		if (cnt > lim)
		{
			lim += 3;
			numArr = (int*)realloc(numArr, sizeof(int) * (lim + 1));
			if (numArr == NULL)
				return -1;
		}
	} while (numArr[cnt - 1] != -1);
	printf("--------------------------------------\n");
	for (int i = 0; i < cnt; i++)
	{
		printf("%d\n", numArr[i]);
	}
	free(numArr);
	return 0;
}