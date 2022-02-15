#include <stdio.h>

void ClearLineFromReadBuffer()
{
	while (fgetc(stdin) != '\n');
}

int main()
{
	char perID[7];
	char name[10];

	fputs("주민번호 앞 6자리 입력: ", stdout);
	fgets(perID, sizeof(perID) / sizeof(char), stdin);
	ClearLineFromReadBuffer();

	fputs("이름 입력: ", stdout);
	fgets(name, sizeof(name) / sizeof(char), stdin);

	printf("주민번호: %s\n", perID);
	printf("이름: %s\n", name);
	return 0;
}