#include <stdio.h>

typedef struct div
{
	int quotient;
	int remainder;
} Div;

extern Div intDiv(int num1, int num2);

int main()
{
	Div val = intDiv(5, 2);
	printf("��: %d\n", val.quotient);
	printf("������: %d\n", val.remainder);
	return 0;
}