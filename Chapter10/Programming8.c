#include <stdio.h>

int square(int n)
{
	if (n == 0)
		return 1;
	else
		return 2 * square(--n);
}


int main()
{
	int n = 0;
	scanf_s("%d", &n);
	printf("%d\n", square(n));
	return 0;
}