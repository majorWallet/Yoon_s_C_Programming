#include <stdio.h>

int main()
{
	int left_up_x = 0, left_up_y = 0;
	int right_down_x = 0, right_down_y = 0;
	printf("�� ����� x, y ��ǥ: ");
	scanf_s("%d %d", &left_up_x, &left_up_y);
	printf("�� �ϴ��� x, y ��ǥ: ");
	scanf_s("%d %d", &right_down_x, &right_down_y);
	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�.\n", (right_down_x - left_up_x) * (right_down_y - left_up_y));
	return 0;
}