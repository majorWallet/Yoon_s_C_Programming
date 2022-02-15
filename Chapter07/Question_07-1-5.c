#include <stdio.h>

int main()
{
	int lim = 0, cnt = 0, num = 0, saveNum = 0;
	scanf_s("%d", &lim);
	while (cnt < lim)
	{
		scanf_s("%d", &num);
		saveNum += num;
		cnt++;
	}
	printf("%f\n", (float)saveNum / (float)lim);
	return 0;
}