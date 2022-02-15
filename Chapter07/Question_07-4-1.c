#include <stdio.h>

int main()
{
	int begin = 0, end = 0, total = 0;
	scanf_s("%d %d", &begin, &end);
	for (int i = begin; i <= end; i++)
	{
		total += i;
	}
	printf("%d\n", total);
	return 0;
}