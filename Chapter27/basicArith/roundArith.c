#include "basicArith.h"
#include "roundArith.h"

double rectangleRound(double base, double height)
{
	return Mul(Add(base, height), 2);
}

double squareRound(double side)
{
	return Mul(side, 4);
}