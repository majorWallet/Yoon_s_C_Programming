#include <stdio.h>
//#define ADD
#define MIN

int main()
{
	int num1, num2;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);

#ifdef ADD
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
#endif

#ifdef MIN
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
#endif

	return 0;
}