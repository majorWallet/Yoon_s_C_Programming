#include <stdio.h>

void SwapIntPtr(int* p1, int* p2)
{
	int* temp = p1;
	p1 = p2;
	p2 = temp;
}

/*
	p1에는 num2의 주소값이 저장되고 p2에는 num1의 주소값이 저장됨.
	하지만, 포인터 변수 p1과 p2는 SwapIntPtr함수의 지역변수이므로
	ptr1, ptr2에 저장된 num1, num2의 주소값은 변경되지 않음.
 */

int main()
{
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1, *ptr2: %d, %d\n", *ptr1, *ptr2);

	SwapIntPtr(ptr1, ptr2);
	printf("*ptr1, *ptr2: %d, %d\n", *ptr1, *ptr2);

	return 0;
}