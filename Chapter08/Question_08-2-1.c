#include <stdio.h>

int main()
{
	for (int i = 2; i < 9; i++)
	{
		for (int j = 2; j < 9; j++)
		{
			if (i % 2 == 0)
			{
				printf("%dX%d=%d\n", i, j, i * j);
				if (i == j)
					break;
			}
		}
		printf("\n");
	}
	return 0;
}