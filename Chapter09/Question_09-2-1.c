#include <stdio.h>

int AddToTotal(int num)
{
	static int total = 0;
	total += num;
	return total;
}

int main()
{
	int num;
	for (int i = 0; i < 3; i++)
	{
		printf("�Է�%d ", i + 1);
		scanf_s("%d", &num);
		printf("����: %d\n", AddToTotal(num));
	}
	return 0;
}