#include <stdio.h>

int main()
{
	int n = 0;
	scanf_s("%d", &n);
	n = n / 10;

	switch (n)
	{
	case 0:
		printf("0�̻� 10�̸�\n");
		break;
	case 1:
		printf("10�̻� 20�̸�\n");
		break;
	case 2:
		printf("20�̻� 30�̸�\n");
		break;
	default:
		printf("30�̻�\n");
		break;
	}

	return 0;
}