#include <stdio.h>

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main()
{
	struct person arr[3] = {
		{ "이승기", "010-1212-0001", 21 },
		{ "정지영", "010-1313-0002", 22 },
		{ "박보영", "010-1414-0003", 29 }
	};
	for (int i = 0; i < 3; i++)
		printf("%s %s %d\n", arr[i].name, arr[i].phoneNum, arr[i].age);
	return 0;
}