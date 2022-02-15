#include <stdio.h>
#include <string.h>

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main()
{
	struct person p1, p2;
	strcpy(p1.name, "안성준");
	strcpy(p1.phoneNum, "010-1122-3344");
	p1.age = 23;

	printf("이름 입력: "); scanf("%s", &p2.name);
	printf("번호 입력: "); scanf("%s", &p2.phoneNum);
	printf("나이 입력: "); scanf("%d", &p2.age);

	printf("이름: %s\n", p1.name);
	printf("번호: %s\n", p1.phoneNum);
	printf("나이: %d\n", p1.age);

	printf("이름: %s\n", p2.name);
	printf("번호: %s\n", p2.phoneNum);
	printf("나이: %d\n", p2.age);
	return 0;
}