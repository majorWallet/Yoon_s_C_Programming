#include <stdio.h>
#define SQUARE(X) X*X

int main()
{
	int num = 20;

	printf("Square of num: %d\n", SQUARE(num));
	printf("Square of -5: %d\n", SQUARE(-5));
	printf("Square of 2.5: %g\n", SQUARE(2.5));

	printf("Square of 2+3: %d\n", SQUARE(2 + 3));
	return 0;
}