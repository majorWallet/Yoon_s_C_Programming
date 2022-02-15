#include <stdio.h>

int WhoIsFirst(int age1, int age2, int (*cmp)(int n1, int n2))
{
	return cmp(age1, age2);
}

int OlderFirst(int age1, int age2)
{
	if (age1 > age2)
		return age1;
	else if (age1 < age2)
		return age2;
	else
		return 0;
}

int YoungerFirst(int age1, int age2)
{
	if (age1 < age2)
		return age1;
	else if (age1 > age2)
		return age2;
	else
		return 0;
}

int main()
{
	int age1 = 20;
	int age2 = 30;
	int first;

	first = WhoIsFirst(age1, age2, OlderFirst);
	printf("%d\n", first);
	first = WhoIsFirst(age1, age2, YoungerFirst);
	printf("%d\n", first);

	return 0;
}