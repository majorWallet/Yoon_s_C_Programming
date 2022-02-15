#include <stdio.h>
#include <string.h>

void clearLineFromReadBuffer()
{
	while (fgetc(stdin) != '\n');
}

void getStr(char* str, const int arrSize)
{
	fgets(str, arrSize, stdin);
	if (strlen(str) >= arrSize - 1)
		clearLineFromReadBuffer();
	str[strlen(str) - 1] = '\0';
}

int main()
{
	char food[100];
	char hobby[100];

	FILE* txtstream = fopen("mystory.txt", "at");
	if (txtstream == NULL)
	{
		printf("파일오픈 실패!");
		return -1;
	}

	fputs("음식: ", stdout);
	getStr(food, sizeof(food));

	fputs("취미: ", stdout);
	getStr(hobby, sizeof(hobby));

	fputs("#음식: ", txtstream);  //문자열 단위 입력
	for (int i = 0; food[i] != '\0'; i++)  //문자 단위 입력
		fputc(food[i], txtstream);
	fputc('\n', txtstream);

	fputs("#취미: ", txtstream);  //문자열 단위 입력
	for (int i = 0; hobby[i] != '\0'; i++)  //문자 단위 입력
		fputc(hobby[i], txtstream);
	fputc('\n', txtstream);

	fclose(txtstream);

	return 0;
}