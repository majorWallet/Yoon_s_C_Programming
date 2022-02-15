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
	char name[10];
	char ID[20];
	char phone[20];
	int cnt = 0;

	FILE* txtstream = fopen("mystory.txt", "wt");
	if (txtstream == NULL)
	{
		printf("파일오픈 실패!");
		return -1;
	}

	fputs("이름: ", stdout);
	getStr(name, sizeof(name));

	fputs("주민등록번호: ", stdout);
	getStr(ID, sizeof(ID));

	fputs("휴대전화: ", stdout);
	getStr(phone, sizeof(phone));
	
	fputs("#이름: ", txtstream);  //문자열 단위 입력
	for (int i = 0; name[i] != '\0'; i++)  //문자 단위 입력
		fputc(name[i], txtstream);
	fputc('\n', txtstream);

	fputs("#주민등록번호: ", txtstream);  //문자열 단위 입력
	for (int i = 0; ID[i] != '\0'; i++)  //문자 단위 입력
		fputc(ID[i], txtstream);
	fputc('\n', txtstream);

	fputs("#휴대전화: ", txtstream);  //문자열 단위 입력
	for (int i = 0; phone[i] != '\0'; i++)  //문자 단위 입력
		fputc(phone[i], txtstream);
	fputc('\n', txtstream);

	fclose(txtstream);

	return 0;
}