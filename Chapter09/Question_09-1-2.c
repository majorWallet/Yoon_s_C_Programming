#include <stdio.h>

float CelToFah(int cel);

int main()
{
	double cel;
	double fah;
	printf("celsius degree: ");
	scanf_s("%lf", &cel);
	fah = CelToFah(cel);
	printf("fahrenheit degree: %.2f\n", fah);
	return 0;
}

float CelToFah(int cel)
{
	return 1.8 * cel + 32;
}