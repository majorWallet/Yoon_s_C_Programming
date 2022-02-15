#include <stdio.h>

int main()
{
	FILE* src = fopen("src.bin", "rb");
	FILE* des = fopen("des.bin", "wb");
	char buf[20];
	int readCnt;

	if (src == NULL || des == NULL)
	{
		fputs("파일오픈 실패!\n", stdout);
		return -1;
	}

	while (1)
	{
		readCnt = fread((void*)buf, 1, sizeof(buf), src);

		if (readCnt < sizeof(buf))
		{
			if (feof(src) != 0)
			{
				fwrite((void*)buf, 1, readCnt, des);
				fputs("파일복사 완료!\n", stdout);
				break;
			}
			else
				fputs("파일복사 실패!\n", stdout);
			break;
		}
		fwrite((void*)buf, 1, sizeof(buf), des);
	}

	fclose(src);
	fclose(des);
	return 0;
}