#include <stdio.h>

int main()
{
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("des.txt", "wt");
	char str[20];

	if (src == NULL || des == NULL)
	{
		printf("���Ͽ��� ����!\n");
		return -1;
	}

	while (fgets(str, sizeof(str), src) != NULL)
		fputs(str, des);

	if (feof(src) != 0)
		printf("���Ϻ��� �Ϸ�!\n");
	else
		printf("���Ϻ��� ����!\n");

	fclose(src);
	fclose(des);
	return 0;
}