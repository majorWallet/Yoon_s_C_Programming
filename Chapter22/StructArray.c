#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};

int main()
{
	struct point arr[3];
	for (int i = 0; i < 3; i++)
	{
		printf("���� ��ǥ �Է�: ");
		scanf_s("%d %d", &arr[i].xpos, &arr[i].ypos);
	}
	for (int i = 0; i < 3; i++)
		printf("[%d, %d] ", arr[i].xpos, arr[i].ypos);
	printf("\n");
	return 0;
}