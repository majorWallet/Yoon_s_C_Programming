#include <stdio.h>

int main()
{
	int cur, is;

	for (cur = 2; cur < 10; cur++)
	{
		for (is = 1; is < 10; is++)
			printf("%dX%d=%d\n", cur, is, cur * is);
		printf("\n");
	}
	return 0;
}