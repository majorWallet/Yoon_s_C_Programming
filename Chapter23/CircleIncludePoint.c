#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

typedef struct circle
{
	Point cen;
	double rad;
} Circle;

void showCircleInfo(const Circle* cptr)
{
	printf("center: [%d, %d]\n", (cptr->cen).xpos, (cptr->cen).ypos);
	printf("radius: %g\n\n", cptr->rad);
}

int main()
{
	Circle c1 = { { 1, 2 }, 3.5 };
	Circle c2 = { 2, 4, 3.9 };
	showCircleInfo(&c1);
	showCircleInfo(&c2);
	return 0;
}