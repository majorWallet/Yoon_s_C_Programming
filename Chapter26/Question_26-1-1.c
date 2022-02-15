#include <stdio.h>
#define PLUS(A, B, C)	((A) + (B) + (C))
#define MULT(A, B, C)	((A) * (B) * (C))

int main()
{
	printf("1 + 2 + 3 = %d\n", PLUS(1, 2, 3));
	printf("1 * 2 * 3 = %d\n", MULT(1, 2, 3));
	return 0;
}