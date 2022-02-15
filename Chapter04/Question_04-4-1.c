#include <stdio.h>

int main()
{
	int num;
	scanf_s("%d", &num);
	printf("%d\n", ~num + 1);
}