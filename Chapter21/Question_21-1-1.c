#include <stdio.h>

int main()
{
	int ch = getchar();
	if (ch < 97)
		putchar(ch + 32);
	else
		putchar(ch - 32);
	putchar('\n');
	return 0;
}