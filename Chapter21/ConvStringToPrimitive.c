#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str[20];

	printf("���� �Է�: ");
	scanf_s("%s", str, sizeof(str));
	printf("%d\n", atoi(str));

	printf("�Ǽ� �Է�: ");
	scanf_s("%s", str, sizeof(str));
	printf("%g\n", atof(str));

	return 0;
}