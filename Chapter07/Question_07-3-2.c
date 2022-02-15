#include <stdio.h>

int main()
{
	int total = 0, num = 0;
	do
	{
		total += num;
		num += 2;
	} while (num < 101);
	printf("%d\n", total);
	return 0;
}