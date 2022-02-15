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
	printf("학생이름: %s\n", sptr->name);
	printf("학생 고유번호: %s\n", sptr->stdnum);
	printf("학교 이름: %s\n", sptr->school);
	printf("선택 전공: %s\n", sptr->major);
	printf("학년: %d\n", sptr->year);
}

int main()
{
	Student arr[7];
	for (int i = 0; i < 7; i++)
	{
		printf("이름: "); scanf_s("%s", arr[i].name, sizeof(arr[i].name)/sizeof(char));
		printf("학번: "); scanf_s("%s", arr[i].stdnum, sizeof(arr[i].stdnum) / sizeof(char));
		printf("학교: "); scanf_s("%s", arr[i].school, sizeof(arr[i].school) / sizeof(char));
		printf("전공: "); scanf_s("%s", arr[i].major, sizeof(arr[i].major) / sizeof(char));
		printf("학년: "); scanf_s("%d", &arr[i].year);
	}
	for (int i = 0; i < 7; i++)
		ShowStudentInfo(&arr[i]);
	return 0;
}