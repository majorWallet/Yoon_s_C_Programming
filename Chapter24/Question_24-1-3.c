#include <stdio.h>

int main()
{
	FILE* txtstream = fopen("mystory.txt", "rt");
	char str[50];
	if (txtstream == NULL)
	{
		printf("�����б� ����!\n");
		return -1;
	}
	while (fgets(str, sizeof(str), txtstream) != NULL)
		printf("%s", str);
	printf("\n");
	fclose(txtstream);
	return 0;
}