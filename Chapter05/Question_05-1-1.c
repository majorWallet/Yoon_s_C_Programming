#include <stdio.h>

int main()
{
	int left_up_x = 0, left_up_y = 0;
	int right_down_x = 0, right_down_y = 0;
	printf("좌 상단의 x, y 좌표: ");
	scanf_s("%d %d", &left_up_x, &left_up_y);
	printf("우 하단의 x, y 좌표: ");
	scanf_s("%d %d", &right_down_x, &right_down_y);
	printf("두 점이 이루는 직사각형의 넓이는 %d입니다.\n", (right_down_x - left_up_x) * (right_down_y - left_up_y));
	return 0;
}