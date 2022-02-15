#include <stdio.h>

void SwapIntPtr(int** dp1, int** dp2)
{
	int* temp = *dp1;
	*dp1 = *dp2;
	*dp2 = temp;
}

/*
	*dp1은 ptr1을 가르키고 *dp2는 ptr2를 가르킨다.
	즉 위 코드는 이와 같이 해석이 가능하다.
	int* tmep = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
	다중 포인터를 통해 ptr1에는 &num2가, ptr2에는 &num1이 저장되었다.
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