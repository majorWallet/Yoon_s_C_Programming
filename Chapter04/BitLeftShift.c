#include <stdio.h>

int main()
{
	int num = 15;  //00000000 00000000 00000000 00001111

	int result1 = num << 1;
	int result2 = num << 2;
	int result3 = num << 3;

	printf("1Ä­ ÀÌµ¿ °á°ú: %d\n", result1);
	printf("2Ä­ ÀÌµ¿ °á°ú: %d\n", result2);
	printf("3Ä­ ÀÌµ¿ °á°ú: %d\n", result3);
	return 0;
}