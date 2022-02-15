#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};

int main()
{
	struct point pos1 = { 1, 2 };
	struct point pos2 = { 100, 200 };
	struct point* posPtr = &pos1;

	(*posPtr).xpos += 4;
	(*posPtr).ypos += 5;
	printf("[%d, %d]\n", posPtr->xpos, posPtr->ypos);

	posPtr = &pos2;
	posPtr->xpos += 1;
	posPtr->ypos += 2;
	printf("[%d, %d]\n", (*posPtr).xpos, (*posPtr).ypos);

	return 0;
}