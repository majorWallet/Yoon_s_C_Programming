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
	strcpy(p1.name, "�ȼ���");
	strcpy(p1.phoneNum, "010-1122-3344");
	p1.age = 23;

	printf("�̸� �Է�: "); scanf("%s", &p2.name);
	printf("��ȣ �Է�: "); scanf("%s", &p2.phoneNum);
	printf("���� �Է�: "); scanf("%d", &p2.age);

	printf("�̸�: %s\n", p1.name);
	printf("��ȣ: %s\n", p1.phoneNum);
	printf("����: %d\n", p1.age);

	printf("�̸�: %s\n", p2.name);
	printf("��ȣ: %s\n", p2.phoneNum);
	printf("����: %d\n", p2.age);
	return 0;
}