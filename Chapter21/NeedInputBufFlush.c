#include <stdio.h>

int main()
{
	char perID[7];
	char name[10];

	fputs("�ֹι�ȣ �� 6�ڸ� �Է�: ", stdout);
	fgets(perID, sizeof(perID) / sizeof(char), stdin);

	fputs("�̸� �Է�: ", stdout);
	fgets(name, sizeof(name) / sizeof(char), stdin);

	printf("�ֹι�ȣ: %s\n", perID);
	printf("�̸�: %s\n", name);
	return 0;
}