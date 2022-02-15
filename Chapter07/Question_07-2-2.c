#include <stdio.h>

int main()
{
	int repeat = 0;
	while (repeat < 5)
	{
		int temp = 0;
		while (temp < repeat)
		{
			printf("O");
			temp++;
		}
		printf("*\n");
		repeat++;
	}
	return 0;
}