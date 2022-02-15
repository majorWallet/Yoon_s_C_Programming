#include <stdio.h>

int main()
{
	int n = 0;
	scanf_s("%d", &n);
	n = n / 10;

	switch (n)
	{
	case 0:
		printf("0이상 10미만\n");
		break;
	case 1:
		printf("10이상 20미만\n");
		break;
	case 2:
		printf("20이상 30미만\n");
		break;
	default:
		printf("30이상\n");
		break;
	}

	return 0;
}