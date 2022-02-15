#include <stdio.h>

void flushBuf()
{
	while (getchar() != '\n');
}