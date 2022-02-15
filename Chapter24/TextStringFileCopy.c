#include <stdio.h>

int main()
{
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("des.txt", "wt");
	char str[20];

	if (src == NULL || des == NULL)
	{
		printf("파일오픈 실패!\n");
		return -1;
	}

	while (fgets(str, sizeof(str), src) != NULL)
		fputs(str, des);

	if (feof(src) != 0)
		printf("파일복사 완료!\n");
	else
		printf("파일복사 실패!\n");

	fclose(src);
	fclose(des);
	return 0;
}