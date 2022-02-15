#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

void getPos(Point* ptr)
{
	printf("xPosition? : ");
	scanf_s("%d", &((*ptr).xpos));
	printf("yPosition? : ");
	scanf_s("%d", &((*ptr).ypos));
}

void OrgSymTrans(Point* ptr)
{
	ptr->xpos = (ptr->xpos) * -1;
	ptr->ypos = (ptr->ypos) * -1;
}

void showPosition(const Point* ptr)
{
	printf("Current Position : [%d, %d]\n", ptr->xpos, ptr->ypos);
}

int main()
{
	Point pos;
	getPos(&pos);
	OrgSymTrans(&pos);
	showPosition(&pos);
	OrgSymTrans(&pos);
	showPosition(&pos);
	return 0;
}