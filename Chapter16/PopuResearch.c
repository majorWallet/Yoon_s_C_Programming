#include <stdio.h>

int main()
{
	int villa[4][2];
	int popu;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d類 %d�� 檣掘熱: ", i + 1, j + 1);
			scanf_s("%d", &villa[i][j]);
		}
	}

	for (int i = 0; i < 4; i++)
	{
		popu = 0;
		popu += villa[i][0];
		popu += villa[i][1];
		printf("%d類 檣掘熱: %d\n", i + 1, popu);
	}
	return 0;
}