#include <stdio.h>

int Add(int num1, int num2)
{
	return num1 + num2;
}

void showAddResult(int num)
{
	printf("������� ���: %d\n", num);
}

int ReadNum()
{
	int num;
	scanf_s("%d", &num);
	return num;
}

void HowToUseThisProg()
{
	printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�.\n");
	printf("��! �׷� �� ���� ������ �Է��ϼ���.\n");
}

int main()
{
	int result, num1, num2;
	HowToUseThisProg();
	num1 = ReadNum();
	num2 = ReadNum();
	result = Add(num1, num2);
	showAddResult(result);
	return 0;
}