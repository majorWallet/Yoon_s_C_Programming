#include <stdio.h>
#define MAX(A, B)	((A) > (B) ? (A) : (B))

int main()
{
	printf("3과 5중 더 큰 수는?: %d\n", MAX(3, 5));
	return 0;
}