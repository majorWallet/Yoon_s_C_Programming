#include <stdio.h>

void fibonacci(int lim)
{
	lim -= 2;
	int first = 0, second = 1, temp = 0;
	printf("%d ", first);
	printf("%d ", second);
	while (lim > 0)
	{
		lim--;
		temp = first;
		first = second;
		second = temp + second;
		printf("%d ", second);
	}
	printf("\n");
}

int main()
{
	int lim = 0;
	printf("repeat: ");
	scanf_s("%d", &lim);
	fibonacci(lim);
	return 0;
}