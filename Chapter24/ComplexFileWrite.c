#include <stdio.h>

int main()
{
	char name[10];
	char sex;
	int age;

	FILE* fp = fopen("friend.txt", "wt");

	for (int i = 0; i < 3; i++)
	{
		printf("�̸� ���� ���� �� �Է�: ");
		scanf("%s %c %d", name, &sex, &age);
		getchar();
		fprintf(fp, "%s %c %d\n", name, sex, age);
	}
	fclose(fp);
	return 0;
}