#include <stdio.h>

int main()
{
	int kor, eng, math, mean;
	scanf_s("%d %d %d", &kor, &eng, &math);
	mean = (kor + eng + math) / 3;

	if (mean >= 90)
		printf("A\n");
	else if (mean >= 80)
		printf("B\n");
	else if (mean >= 70)
		printf("C\n");
	else if (mean >= 50)
		printf("D\n");
	else
		printf("F\n");

	return 0;
}