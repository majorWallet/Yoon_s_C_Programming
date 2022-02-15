//sol 1
/*
#include <stdio.h>

int main()
{
	int total = 0, num = 1;

	while (num != 0)
	{
		printf("정수 입력(0 to quit): ");
		scanf_s("%d", &num);
		total += num;
	}
	printf("합계: %d\n", total);
	return 0;
}
*/


//sol 2
#include <stdio.h>

int main()
{
	int total = 0, num = 0;
	printf("정수 입력(0 to quit): ");
	scanf_s("%d", &num);
	while (num != 0)
	{
		total += num;
		printf("정수 입력(0 to quit): ");
		scanf_s("%d", &num);
	}
	printf("합계: %d\n", total);
	return 0;
}