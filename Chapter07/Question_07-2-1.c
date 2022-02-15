#include <stdio.h>

int main()
{
	int cnt = 0, num = 0, numSave = 0;
	while (cnt < 5)
	{
		scanf_s("%d", &num);
		while (num > 0)
		{
			numSave += num;
			cnt++;
			num = 0;
		}
	}
	printf("%d\n", numSave);
	return 0;
}