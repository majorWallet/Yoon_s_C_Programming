#include <stdio.h>

int main()
{
	int arr[10];

	for (int i = 0; i < 10; i++)
		scanf_s("%d", &arr[i]);

	printf("È¦¼ö Ãâ·Â: ");
	for (int i = 0; i < 10; i++)
		if (arr[i] % 2 == 1)
			printf("%d ", arr[i]);
	printf("\n");

	printf("Â¦¼ö Ãâ·Â: ");
	for (int i = 0; i < 10; i++)
		if (arr[i] % 2 == 0)
			printf("%d ", arr[i]);
	printf("\n");

	return 0;
}