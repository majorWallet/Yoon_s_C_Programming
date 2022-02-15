#include <stdio.h>

int main()
{
	int squareNum = 2;
	int n = 0, k = 0;
	scanf_s("%d", &n);
	while (squareNum <= n)
	{
		squareNum *= 2;
		k++;
	}
	printf("%d\n", k);
	return 0;
}