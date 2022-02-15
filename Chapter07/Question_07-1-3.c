#include <stdio.h>

int main()
{
	int saveNum = 0, inputNum = 0;
	scanf_s("%d", &inputNum);
	while (inputNum != 0)
	{
		saveNum += inputNum;
		scanf_s("%d", &inputNum);
	}
	printf("%d\n", saveNum);
	return 0;
}