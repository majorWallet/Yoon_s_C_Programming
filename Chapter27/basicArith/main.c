#include <stdio.h>
#include "areaArith.h"
#include "roundArith.h"

int main()
{
	printf("�ﰢ�� ����(�غ� 4, ���� 2): %g\n", triangleArea(4, 2));
	printf("�� ����(������ 3): %g\n", circleArea(3));

	printf("���簢�� �ѷ�(�غ� 2.5, ���� 5.2): %g\n", rectangleRound(2.5, 5.2));
	printf("���簢�� �ѷ�(���� ���� 3): %g\n", squareRound(3));
	return 0;
}