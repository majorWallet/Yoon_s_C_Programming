#include <stdio.h>

int main()
{
	double num1, num2;
	scanf_s("%lf %lf", &num1, &num2);
	printf("%f+%f=%f\n", num1, num2, num1 + num2);
	printf("%f-%f=%f\n", num1, num2, num1 - num2);
	printf("%f*%f=%lf\n", num1, num2, num1 * num2);
	printf("%f/%f=%lf\n", num1, num2, num1 / num2);
	return 0;
}