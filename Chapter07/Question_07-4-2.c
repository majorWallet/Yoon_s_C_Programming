#include <stdio.h>

int main()
{
	int lim = 0, fac = 1;
	scanf_s("%d", &lim);
	for (int i = 1; i <= lim; i++)
	{
		fac *= i;
	}
	printf("%d\n", fac);
}