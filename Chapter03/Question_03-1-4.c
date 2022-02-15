#include <stdio.h>

int main()
{
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);
	printf("¸ò: %d\n", num1 / num2);
	printf("³ª¸ÓÁö: %d\n", num1 % num2);
	return 0;
}