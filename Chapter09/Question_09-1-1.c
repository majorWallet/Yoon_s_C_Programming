#include <stdio.h>

int Min(int num1, int num2, int num3);
int Max(int num1, int num2, int num3);

int main()
{
	int num1, num2, num3;
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("%d %d\n", Min(num1, num2, num3), Max(num1, num2, num3));
	return 0;
}

int Min(int num1, int num2, int num3)
{
	if (num1 <= num2 && num2 <= num3 || num1 <= num3 && num3 <= num2)
		return num1;
	else if (num2 <= num1 && num1 <= num3 || num2 <= num3 && num3 <= num1)
		return num2;
	else if (num3 <= num2 && num2 <= num1 || num3 <= num1 && num1 <= num2)
		return num3;
}

int Max(int num1, int num2, int num3)
{
	if (num1 <= num2 && num2 <= num3 || num2 <= num1 && num1 <= num3)
		return num3;
	else if (num3 <= num1 && num1 <= num2 || num1 <= num3 && num3 <= num2)
		return num2;
	else if (num3 <= num2 && num2 <= num1 || num2 <= num3 && num3 <= num1)
		return num1;
}