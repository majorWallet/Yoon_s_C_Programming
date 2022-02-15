#include <stdio.h>
#define STNUM(Y, S, P) (Y ## S ## P)

int main()
{
	printf("ÇÐ¹ø: %d\n", STNUM(19, 10, 2191));
	return 0;
}