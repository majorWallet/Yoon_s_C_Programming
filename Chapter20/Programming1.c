#include <stdio.h>

void get2DArr(int (*arr)[4])
{
	int num = 1;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = num;
			num++;
		}
}

void rotate2DArr(int (*arr)[4])
{
	int tempArr[4][4];
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			tempArr[i][j] = arr[i][j];

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			arr[j][3-i] = tempArr[i][j];
}

void print2DArr(int (*arr)[4])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}
}

int main()
{
	int arr[4][4];
	get2DArr(arr);

	print2DArr(arr);
	printf("\n");

	rotate2DArr(arr);
	print2DArr(arr);
	printf("\n");

	rotate2DArr(arr);
	print2DArr(arr);
	printf("\n");

	rotate2DArr(arr);
	print2DArr(arr);
	printf("\n");

	return 0;
}