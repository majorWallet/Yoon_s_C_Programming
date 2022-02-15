#include <stdio.h>

int main()
{
	int num;
	printf("정수 입력: ");
	scanf_s("%d", &num);

	if (num < 0)
		printf("입력 값은 0보다 작다.\n");

	if (num > 0)
		printf("입력 값은 0보다 크다.\n");

	if (num == 0)
		printf("입력 값은 0이다.\n");

	return 0;
}