#include <stdio.h>


void printArr(const int* const arr, int arrLen)
{
	for (int i = 0; i < arrLen; i++)
		printf("%d ", arr[i]);
}


int calBinary(int decimal, int* const binary, int arrLen)
{
	int cnt = 0;
	for (int i = 0; i < arrLen - 1; i++)
	{
		binary[i] = decimal % 2;
		decimal /= 2;
		cnt++;
		if (decimal == 0 || decimal == 1)
		{
			binary[i + 1] = decimal;
			cnt++;
			break;
		}
	}
	for (int i = 0; i < cnt / 2; i++)
	{
		int temp = binary[i];
		binary[i] = binary[cnt - i - 1];
		binary[cnt - i - 1] = temp;
	}
	return cnt;
}


int main()
{
	int decimal, binaryLen = 0;
	int binary[sizeof(int)*8];

	printf("10진수 정수 입력: ");
	scanf_s("%d", &decimal);
	binaryLen = calBinary(decimal, binary, sizeof(binary) / sizeof(int));

	printf("2진수 정수: ");
	printArr(binary, binaryLen);
	printf("\n");

	return 0;
}