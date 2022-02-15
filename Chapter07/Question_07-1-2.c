#include <stdio.h>

int main()
{
	int cnt = 0, num = 0;
	scanf_s("%d", &num);
	while (cnt < num)
	{
		cnt++;
		printf("%d\n", 3 * cnt);
	}
	return 0;
}