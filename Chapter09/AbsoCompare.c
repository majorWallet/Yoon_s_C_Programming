#include <stdio.h>
int AbsoCompare(int num1, int num2);
int GetAbsoVal(int num);

int main()
{
	int num1, num2;
	printf("�� ���� ���� �Է�: ");
	scanf_s("%d %d", &num1, &num2);
	printf("%d�� %d �� ������ ū ��: %d\n", num1, num2, AbsoCompare(num1, num2));
	return 0;
}

int AbsoCompare(int num1, int num2)
{
	if (GetAbsoVal(num1) > GetAbsoVal(num2))
		return num1;
	else
		return num2;
}

int GetAbsoVal(int num)
{
	if (num < 0)
		return -num;
	else
		return num;
}