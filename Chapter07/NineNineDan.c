#include <stdio.h>

int main()
{
	int dan = 0, num = 1;
	printf("¸î ´Ü? ");
	scanf_s("%d", &dan);

	while (num < 10)
	{
		printf("%dX%d=%d\n", dan, num, dan * num);
		num++;
	}
	return 0;
}