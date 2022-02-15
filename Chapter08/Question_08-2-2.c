#include <stdio.h>

int main()
{
	int ia, iz;
	int ja, jz;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			ia = i / 10;
			iz = i - ia * 10;
			jz = j / 10;
			ja = j - jz * 10;
			if (i + j == 99 && ia == ja && iz == jz)
			{
				printf("%d %d\n", ia, iz);
				break;
			}
		}
	}
	return 0;
}