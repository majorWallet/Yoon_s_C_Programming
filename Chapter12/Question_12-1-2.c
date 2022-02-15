#include <stdio.h>

int main()
{
	int num1 = 10, num2 = 10;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	printf("*ptr1: %d, *ptr2: %d\n", *ptr1, *ptr2);
	(*ptr1) += 10;
	(*ptr2) -= 10;
	printf("*ptr1: %d, *ptr2: %d\n", *ptr1, *ptr2);
	int* temp_ptr = ptr1;
	ptr1 = ptr2;
	ptr2 = temp_ptr;
	printf("*ptr1: %d, *ptr2: %d\n", *ptr1, *ptr2);
	return 0;
}