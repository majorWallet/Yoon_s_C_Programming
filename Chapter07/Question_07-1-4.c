#include <stdio.h>

int main()
{
	int dan = 0, num = 9;
	scanf_s("%d", &dan);
	while (num > 0)
	{
		printf("%dX%d=%d\n", dan, num, dan * num);
		num--;
	}
	return 0;
}