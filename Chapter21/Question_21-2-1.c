#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int numIdx = 0;
	int num = 0;
	char str[50];
	char numStr[50];
	fgets(str, sizeof(str), stdin);
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			numStr[numIdx] = str[i];
			numIdx++;
		}
	}
	numStr[numIdx] = '\0';
	for (int i = 0; i < strlen(numStr); i++)
	{
		char ch;
		ch = numStr[i];
		num += atoi(&ch);
	}
	printf("%d\n", num);
	return 0;
}