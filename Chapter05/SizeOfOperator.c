#include <stdio.h>

int main()
{
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;
	printf("���� ch�� ũ��: %dbyte\n", sizeof(ch));
	printf("���� inum�� ũ��: %dbyte\n", sizeof(inum));
	printf("���� dnum�� ũ��: %dbyte\n", sizeof(dnum));

	printf("char�� ũ��: %dbyte\n", sizeof(char));
	printf("int�� ũ��: %dbyte\n", sizeof(int));
	printf("long�� ũ��: %dbyte\n", sizeof(long));
	printf("long long�� ũ��: %dbyte\n", sizeof(long long));
	printf("float�� ũ��: %dbyte\n", sizeof(float));
	printf("double�� ũ��: %dbyte\n", sizeof(double));
	return 0;
}