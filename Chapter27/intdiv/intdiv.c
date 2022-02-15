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
	printf("¸ò: %d\n", val.quotient);
	printf("³ª¸ÓÁö: %d\n", val.remainder);
	return 0;
}