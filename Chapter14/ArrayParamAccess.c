#include <stdio.h>

void showArrElem(int* param, int len)
{
	for (int i = 0; i < len; i++)
		printf("%d ", param[i]);
	printf("\n");
}

void addArrElem(int* param, int len, int add)
{
	for (int i = 0; i < len; i++)
		param[i] += add;
}

int main()
{
	int arr[3] = { 1, 2, 3 };

	for (int i = 1; i <= 3; i++)
	{
		addArrElem(arr, sizeof(arr) / sizeof(int), i);
		showArrElem(arr, sizeof(arr) / sizeof(int));
	}

	return 0;
}