#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

void swapPoint(Point* posPtr)
{
	int temp = posPtr->xpos;
	posPtr->xpos = posPtr->ypos;
	(*posPtr).ypos = temp;
}

void printPos(const Point* const posPtr)
{
	printf("[%d, %d]\n", posPtr->xpos, posPtr->ypos);
}

int main()
{
	Point pos1 = { 2, 4 };
	Point pos2 = { 5, 7 };
	swapPoint(&pos1);
	swapPoint(&pos2);
	printPos(&pos1);
	printPos(&pos2);
	return 0;
}