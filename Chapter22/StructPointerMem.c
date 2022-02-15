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
	printf("���� ������: %g\n", cir.radius);
	printf("���� �߽� ��ǥ: [%d, %d]\n", cir.center->xpos, cir.center->ypos);
	return 0;
}