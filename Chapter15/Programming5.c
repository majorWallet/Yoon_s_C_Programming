#include <stdio.h>

void getArr(int* const arr, const int arrLen)
{
	for (int i = 0; i < arrLen; i++)
		scanf_s("%d", &arr[i]);
}

void printArr(const int* const arr, const int arrLen)
{
	for (int i = 0; i < arrLen; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void bubbleSort(int* const arr, const int arrLen)
{
	for (int i = 1; i < arrLen; i++)
		for (int j = 0; j < arrLen - i; j++)
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
}

int main()
{
	int arr[7];
	const int arrLen = sizeof(arr) / sizeof(int);
	getArr(arr, arrLen);
	bubbleSort(arr, arrLen);
	printArr(arr, arrLen);
}