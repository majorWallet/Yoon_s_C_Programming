#include <stdio.h>

int main(int argc, char* argv[])
{
	printf("���޵� ���ڿ��� ��: %d\n", argc);

	for (int i = 0; i < argc; i++)
		printf("%d��° ���ڿ�: %s\n", i + 1, argv[i]);

	return 0;
}