#include <stdio.h>

int main()
{
	int num1, num2, num3;
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("%dX%d+%d=%d\n", num1, num2, num3, num1 * num2 + num3);
	return 0;
}