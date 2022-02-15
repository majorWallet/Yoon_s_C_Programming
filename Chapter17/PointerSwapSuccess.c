#include <stdio.h>

void SwapIntPtr(int** dp1, int** dp2)
{
	int* temp = *dp1;
	*dp1 = *dp2;
	*dp2 = temp;
}

/*
	*dp1�� ptr1�� ����Ű�� *dp2�� ptr2�� ����Ų��.
	�� �� �ڵ�� �̿� ���� �ؼ��� �����ϴ�.
	int* tmep = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
	���� �����͸� ���� ptr1���� &num2��, ptr2���� &num1�� ����Ǿ���.
*/

int main()
{
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1, *ptr2: %d, %d\n", *ptr1, *ptr2);

	SwapIntPtr(&ptr1, &ptr2);
	printf("*ptr1, *ptr2: %d, %d\n", *ptr1, *ptr2);

	return 0;
}