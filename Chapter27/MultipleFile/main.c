#include <stdio.h>
extern void increment();
extern int getNum();

int main()
{
	printf("num: %d\n", getNum());
	increment();
	printf("num: %d\n", getNum());
	increment();
	printf("num: %d\n", getNum());
	return 0;
}