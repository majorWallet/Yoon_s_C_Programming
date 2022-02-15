#include <stdio.h>

typedef struct student
{
	char name[20];
	char stdnum[20];
	char school[20];
	char major[20];
	int year;
} Student;

void ShowStudentInfo(const Student* const sptr)
{
	printf("�л��̸�: %s\n", sptr->name);
	printf("�л� ������ȣ: %s\n", sptr->stdnum);
	printf("�б� �̸�: %s\n", sptr->school);
	printf("���� ����: %s\n", sptr->major);
	printf("�г�: %d\n", sptr->year);
}

int main()
{
	Student arr[7];
	for (int i = 0; i < 7; i++)
	{
		printf("�̸�: "); scanf_s("%s", arr[i].name, sizeof(arr[i].name)/sizeof(char));
		printf("�й�: "); scanf_s("%s", arr[i].stdnum, sizeof(arr[i].stdnum) / sizeof(char));
		printf("�б�: "); scanf_s("%s", arr[i].school, sizeof(arr[i].school) / sizeof(char));
		printf("����: "); scanf_s("%s", arr[i].major, sizeof(arr[i].major) / sizeof(char));
		printf("�г�: "); scanf_s("%d", &arr[i].year);
	}
	for (int i = 0; i < 7; i++)
		ShowStudentInfo(&arr[i]);
	return 0;
}