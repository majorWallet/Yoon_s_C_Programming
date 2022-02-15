#include <stdio.h>

void ShowAllString(int argc, char* argv[])
{
	for (int i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
}

int main()
{
	char* str[3] = {
		"C Programming",
		"C++ Programing",
		"JAVA Programming"
	};
	ShowAllString(3, str);
	return 0;
}