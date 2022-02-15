#include "basicArith.h"
#include "areaArith.h"

double triangleArea(double base, double height)
{
	return Div(Mul(base, height), 2);
}

double circleArea(double rad)
{
	return Mul(Mul(rad, rad), PI);
}