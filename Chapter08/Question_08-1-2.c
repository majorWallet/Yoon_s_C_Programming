#include <stdio.h>

int main()
{
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);
	printf("%d\n", num1 - num2 > 0 ? num1 - num2 : -num1 + num2);
	return 0;
}