#include <stdio.h>

void MaxMin(const int* const ar, int** max, int** min)
{
	*max = &ar[0];
	*min = &ar[0];
	for (int i = 0; i < 5; i++)
		if (max < ar[i])
			*max = &ar[i];
	for (int i = 0; i < 5; i++)
		if (min > ar[i])
			*min = &ar[i];
}

int main()
{
	int* maxPtr;
	int* minPtr;
	int arr[5];
	for (int i = 0; i < 5; i++)
		scanf_s("%d", &arr[i]);
	MaxMin(arr, &maxPtr, &minPtr);
	printf("max: %d, min: %d\n", *maxPtr, *minPtr);
	return 0;
}