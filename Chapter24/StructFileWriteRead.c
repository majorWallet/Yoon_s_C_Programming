#include <stdio.h>

typedef struct friend
{
	char name[10];
	char sex;
	int age;
} Friend;

int main()
{
	FILE* fp;
	Friend myF1[3];
	Friend myF2[3];

	fp = fopen("friend.bin", "wb");
	for (int i = 0; i < 3; i++)
	{
		printf("이름, 성별, 나이 순 입력: ");
		scanf("%s %c %d", myF1[i].name, &(myF1[i].sex), &(myF1[i].age));
		fwrite((void*)&myF1[i], sizeof(myF1[i]), 1, fp);
	}
	fclose(fp);

	fp = fopen("friend.bin", "rb");
	for (int i = 0; i < 3; i++)
	{
		fread((void*)&myF2[i], sizeof(myF2[i]), 1, fp);
		printf("%s %c %d\n", myF2[i].name, myF2[i].sex, myF2[i].age);
	}
	fclose(fp);
	return 0;
}