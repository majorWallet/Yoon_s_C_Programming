#include <stdio.h>
#include "ComplexNum.h"
#include "CalComplexNum.h"

int main()
{
	ComplexNum arr[2];
	ComplexNum plusResult;
	ComplexNum mulResult;
	for (int i = 0; i < 2; i++)
	{
		printf("���Ҽ� �Է�%d[�Ǽ� ���]: ", i + 1);
		scanf_s("%lf %lf", &(arr[i].actualNum), &(arr[i].imaginaryNum));
	}
	plusResult = plusComplexNum(arr[0], arr[1]);
	mulResult = mulComplexNum(arr[0], arr[1]);
	printf("���ǰ��] �Ǽ�: %lf, ���: %lf\n", plusResult.actualNum, plusResult.imaginaryNum);
	printf("���ǰ��] �Ǽ�: %lf, ���: %lf\n", mulResult.actualNum, mulResult.imaginaryNum);
	return 0;
}