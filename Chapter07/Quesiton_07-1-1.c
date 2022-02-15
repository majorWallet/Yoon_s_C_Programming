#include <stdio.h>

int main()
{
	int num = 0, lim = 0;
	scanf_s("%d", &lim);
	while (num < lim)
	{
		printf("Hello world!\n");
		num++;
	}
	return 0;
}