#include <stdio.h>

int main()
{
	int n = 0;
	int cnt = 0;
	int arr[10][10];
	printf("숫자를 입력하시오: ");
	scanf_s("%d", &n);
	int colBegin = 0, rowBegin = 0;
	int colEnd = n-1, rowEnd = n-1;
	while (cnt < n * n)
	{
		for (int i = rowBegin; i <= rowEnd; i++)
		{
			arr[colBegin][i] = cnt + 1;
			cnt++;
		}
		colBegin++;
		for (int i = colBegin; i <= colEnd; i++)
		{
			arr[i][rowEnd] = cnt + 1;
			cnt++;
		}
		rowEnd--;
		for (int i = rowEnd; i >= rowBegin; i--)
		{
			arr[colEnd][i] = cnt + 1;
			cnt++;
		}
		colEnd--;
		for (int i = colEnd; i >= colBegin; i--)
		{
			arr[i][rowBegin] = cnt + 1;
			cnt++;
		}
		rowBegin++;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}

	return 0;
}