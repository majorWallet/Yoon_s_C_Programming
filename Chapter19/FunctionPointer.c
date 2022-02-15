#include <stdio.h>

void SimpleAdder(int n1, int n2)
{
	printf("%d + %d = %d\n", n1, n2, n1 + n2);
}

void ShowStr(char* str)
{
	printf("%s", str);
}

int main()
{
	char* str = "Function Pointer";
	int num1 = 10, num2 = 20;

	void (*fptr1)(int, int) = SimpleAdder;
	void (*fptr2)(char*) = ShowStr;

	fptr1(num1, num2);
	fptr2(str);
	return 0;
}