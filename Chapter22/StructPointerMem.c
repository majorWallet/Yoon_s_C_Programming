#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};

struct circle
{
	double radius;
	struct point* center;
};

int main()
{
	struct point pos = { 0, 0 };
	struct circle cir = { 5, &pos };
	printf("원의 반지름: %g\n", cir.radius);
	printf("원의 중심 좌표: [%d, %d]\n", cir.center->xpos, cir.center->ypos);
	return 0;
}