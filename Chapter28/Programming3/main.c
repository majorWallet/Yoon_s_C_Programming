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
		printf("복소수 입력%d[실수 허수]: ", i + 1);
		scanf_s("%lf %lf", &(arr[i].actualNum), &(arr[i].imaginaryNum));
	}
	plusResult = plusComplexNum(arr[0], arr[1]);
	mulResult = mulComplexNum(arr[0], arr[1]);
	printf("합의결과] 실수: %lf, 허수: %lf\n", plusResult.actualNum, plusResult.imaginaryNum);
	printf("곱의결과] 실수: %lf, 허수: %lf\n", mulResult.actualNum, mulResult.imaginaryNum);
	return 0;
}