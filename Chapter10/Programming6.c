#include <stdio.h>

int main()
{
	int hr, min, sec;
	int inputSec;
	scanf_s("%d", &inputSec);
	hr = inputSec / 3600;
	min = (inputSec - hr * 3600) / 60;
	sec = inputSec - (hr * 3600 + min * 60);
	printf("%d:%d:%d\n", hr, min, sec);
	return 0;
}