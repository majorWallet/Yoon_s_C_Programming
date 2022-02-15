#include <stdio.h>

int main()
{
	FILE* fp = fopen("text.txt", "wt");
	fputs("123456789", fp);
	fclose(fp);

	fp = fopen("text.txt", "rt");

	fseek(fp, -2, SEEK_END);
	fputc(fgetc(fp), stdout);
	fputc('\n', stdout);

	fseek(fp, -1, SEEK_CUR);
	fputc(fgetc(fp), stdout);
	fputc('\n', stdout);

	fseek(fp, 2, SEEK_SET);
	fputc(fgetc(fp), stdout);
	fputc('\n', stdout);

	fclose(fp);

	return 0;
}