#include <stdio.h>

void getNumArr(int* const arr, const int arrLen)
{
	int odd_cnt = 0;
	int even_cnt = 0;
	printf("�� 10���� ���� �Է�\n");
	for (int i = 0; i < arrLen; i++)
	{
		int num;
		printf("�Է�: ");
		scanf_s("%d", &num);
		if (num % 2 == 1)
		{
			arr[odd_cnt] = num;
			odd_cnt++;
		}
		else if (num % 2 == 0)
		{
			arr[arrLen - even_cnt - 1] = num;
			even_cnt++;
		}
	}
}

void printArr(const int* const arr, const int arrLen)
{
	printf("�迭 ����� ���: ");
	for (int i = 0; i < arrLen; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int numArr[10];
	getNumArr(numArr, sizeof(numArr) / sizeof(int));
	printArr(numArr, sizeof(numArr) / sizeof(int));
	return 0;
}