#include <stdio.h>
#include <math.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

typedef struct rectangle
{
	Point pos1;
	Point pos2;
} Rectangle;

int calArea(const Rectangle* recPtr)
{
	return abs((recPtr->pos1).xpos - (recPtr->pos2).xpos) * abs((recPtr->pos1).ypos - (recPtr->pos2).ypos);
}

int main()
{
	Rectangle rec1 = { { 1, 1 }, { 3, 6 } };
	printf("%d\n", calArea(&rec1));
	return 0;
}