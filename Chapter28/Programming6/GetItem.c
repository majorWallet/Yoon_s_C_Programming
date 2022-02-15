#include <stdio.h>

extern void flushBuf();

void init()
{
	puts("\n***** MENU *****");
	puts("1. Insert");
	puts("2. Delete");
	puts("3. Search");
	puts("4. Print All");
	puts("5. Exit");
}

char getItem()
{
	char item;
	fputs("Choose the item: ", stdout);
	item = getchar();
	flushBuf();
	return item;
}