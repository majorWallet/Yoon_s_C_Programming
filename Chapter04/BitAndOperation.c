#include <stdio.h>

int main()
{
	int num1 = 15;  //00000000 000000000 00000000 00001111
	int num2 = 20;  //00000000 000000000 00000000 00010100
	int num3 = num1 & num2;  //num1�� num2�� ��Ʈ���� & ����
	printf("AND ������ ���: %d\n", num3);
	return 0;
}