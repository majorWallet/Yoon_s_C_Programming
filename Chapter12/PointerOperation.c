#include <stdio.h>

int main()
{
	int num1 = 100, num2 = 100;
	int* pval;

	pval = &num1;
	(*pval) += 30;
	printf("address of num1: %p, value of pval: %p, address of pval: %p\n", &num1, pval, &pval);

	pval = &num2;
	(*pval) -= 30;
	printf("address of num2: %p, value of pval: %p, address of pval: %p\n", &num2, pval, &pval);

	printf("num1: %d, num2: %d\n", num1, num2);
	printf("*pval: %d\n", *pval);
	return 0;
}