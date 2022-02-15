#include <stdio.h>


int getStr(char* const str, const int arrLen)
{
	int strLen = 0;
	scanf_s("%s", str, arrLen);
	while (str[strLen] != '\0')
		strLen++;
	return strLen;
}


int chkPalindrome(char* const str, const int strLen)
{
	for (int i = 0; i < strLen / 2; i++)
		if (str[i] != str[strLen - i - 1])
			return 0;
	return 1;
}


int main()
{
	char str[50];
	int strLen;
	strLen = getStr(str, sizeof(str) / sizeof(char));
	if (chkPalindrome(str, strLen))
		printf("회문 입니다.\n");
	else
		printf("회문이 아닙니다.\n");
	return 0;
}