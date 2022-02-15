#include <stdio.h>

int main()
{
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;
	printf("변수 ch의 크기: %dbyte\n", sizeof(ch));
	printf("변수 inum의 크기: %dbyte\n", sizeof(inum));
	printf("변수 dnum의 크기: %dbyte\n", sizeof(dnum));

	printf("char의 크기: %dbyte\n", sizeof(char));
	printf("int의 크기: %dbyte\n", sizeof(int));
	printf("long의 크기: %dbyte\n", sizeof(long));
	printf("long long의 크기: %dbyte\n", sizeof(long long));
	printf("float의 크기: %dbyte\n", sizeof(float));
	printf("double의 크기: %dbyte\n", sizeof(double));
	return 0;
}