#include <stdio.h>

int main()
{
	int arr[3][2];
	for (int i = 0; i < 3; i++)
	{
		printf("%d��° ��\n", i);
		for (int j = 0; j < 2; j++)
			printf("%p\n", &arr[i][j]);
	}
	return 0;
}