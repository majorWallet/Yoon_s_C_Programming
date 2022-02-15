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
		printf("���Ͽ��� ����!");
		return -1;
	}

	fputs("�̸�: ", stdout);
	getStr(name, sizeof(name));

	fputs("�ֹε�Ϲ�ȣ: ", stdout);
	getStr(ID, sizeof(ID));

	fputs("�޴���ȭ: ", stdout);
	getStr(phone, sizeof(phone));
	
	fputs("#�̸�: ", txtstream);  //���ڿ� ���� �Է�
	for (int i = 0; name[i] != '\0'; i++)  //���� ���� �Է�
		fputc(name[i], txtstream);
	fputc('\n', txtstream);

	fputs("#�ֹε�Ϲ�ȣ: ", txtstream);  //���ڿ� ���� �Է�
	for (int i = 0; ID[i] != '\0'; i++)  //���� ���� �Է�
		fputc(ID[i], txtstream);
	fputc('\n', txtstream);

	fputs("#�޴���ȭ: ", txtstream);  //���ڿ� ���� �Է�
	for (int i = 0; phone[i] != '\0'; i++)  //���� ���� �Է�
		fputc(phone[i], txtstream);
	fputc('\n', txtstream);

	fclose(txtstream);

	return 0;
}