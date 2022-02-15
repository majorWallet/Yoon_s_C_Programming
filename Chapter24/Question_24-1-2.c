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
		printf("���Ͽ��� ����!");
		return -1;
	}

	fputs("����: ", stdout);
	getStr(food, sizeof(food));

	fputs("���: ", stdout);
	getStr(hobby, sizeof(hobby));

	fputs("#����: ", txtstream);  //���ڿ� ���� �Է�
	for (int i = 0; food[i] != '\0'; i++)  //���� ���� �Է�
		fputc(food[i], txtstream);
	fputc('\n', txtstream);

	fputs("#���: ", txtstream);  //���ڿ� ���� �Է�
	for (int i = 0; hobby[i] != '\0'; i++)  //���� ���� �Է�
		fputc(hobby[i], txtstream);
	fputc('\n', txtstream);

	fclose(txtstream);

	return 0;
}