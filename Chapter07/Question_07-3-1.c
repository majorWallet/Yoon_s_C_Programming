//sol 1
/*
#include <stdio.h>

int main()
{
	int total = 0, num = 1;

	while (num != 0)
	{
		printf("���� �Է�(0 to quit): ");
		scanf_s("%d", &num);
		total += num;
	}
	printf("�հ�: %d\n", total);
	return 0;
}
*/


//sol 2
#include <stdio.h>

int main()
{
	int total = 0, num = 0;
	printf("���� �Է�(0 to quit): ");
	scanf_s("%d", &num);
	while (num != 0)
	{
		total += num;
		printf("���� �Է�(0 to quit): ");
		scanf_s("%d", &num);
	}
	printf("�հ�: %d\n", total);
	return 0;
}