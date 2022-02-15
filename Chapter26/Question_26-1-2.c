#include <stdio.h>
#define PI	3.14
#define AREA(R)	((R)*(R)*(PI))

int main()
{
	printf("반지름이 5인 원의 넓이: %g\n", AREA(5));
	return 0;
}