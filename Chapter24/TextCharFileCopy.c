#include <stdio.h>

int main()
{
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("des.txt", "wt");
	int ch;

	if (src == NULL || des == NULL)
	{
		printf("���Ͽ��� ����!");
		return -1;
	}

	while ((ch = fgetc(src)) != EOF)
		fputc(ch, des);

	if (feof(src) != 0)
		printf("���Ϻ��� �Ϸ�!");
	else
		printf("���Ϻ��� ����!");

	fclose(src);
	fclose(des);
	return 0;
}