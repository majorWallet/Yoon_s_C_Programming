#include <stdio.h>

int main()
{
	int num1 = 12;
	int num2 = 12;

	printf("num1: %d \n", num1);
	printf("num1: %d \n", num1++);
	printf("num1: %d \n", num1);

	printf("num2: %d \n", num2);
	printf("num2: %d \n", ++num2);
	printf("num2: %d \n", num2);
}