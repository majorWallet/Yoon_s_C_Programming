#include "ComplexNum.h"

ComplexNum plusComplexNum(ComplexNum num1, ComplexNum num2)
{
	ComplexNum result;
	result.actualNum = num1.actualNum + num2.actualNum;
	result.imaginaryNum = num1.imaginaryNum + num2.imaginaryNum;
	return result;
}

ComplexNum mulComplexNum(ComplexNum num1, ComplexNum num2)
{
	ComplexNum result;
	result.actualNum = (num1.actualNum * num2.actualNum) - (num1.imaginaryNum * num2.imaginaryNum);
	result.imaginaryNum = (num1.imaginaryNum * num2.actualNum) + (num1.actualNum * num2.imaginaryNum);
	return result;
}