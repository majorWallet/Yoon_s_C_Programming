#include <stdio.h>


int main()
{
	int arr[2][4];
	int Tarr[4][2];
	int colSize = sizeof(arr) / sizeof(arr[0]);
	int rowSize = sizeof(arr[0]) / sizeof(int);
	int cnt = 1;
	for (int i = 0; i < colSize; i++)
	{
		for (int j = 0; j < rowSize; j++)
		{
			arr[i][j] = cnt;
			cnt++;
		}
	}

	for (int i = 0; i < colSize; i++)
		for (int j = 0; j < rowSize; j++)
			Tarr[j][i] = arr[i][j];

	for (int i = 0; i < rowSize; i++)
	{
		for (int j = 0; j < colSize; j++)
			printf("%d ", Tarr[i][j]);
		printf("\n");
	}

	return 0;
}