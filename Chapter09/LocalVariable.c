#include <stdio.h>

int SimpleFunOne()
{
	int num = 10;
	num++;
	printf("SimpleFunOne num: %d\n", num);
	return 0;
}

int SimpleFunTwo()
{
	int num1 = 20;
	int num2 = 30;
	num1++, num2--;
	printf("num1 & num2: %d %d\n", num1, num2);
	return 0;
}

int main()
{
	int num = 17;
	SimpleFunOne();
	SimpleFunTwo();
	printf("main num: %d\n", num);
	return 0;
}