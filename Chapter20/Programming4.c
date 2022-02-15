#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComRSP()
{
	return rand() % 3 + 1;
}

int getUserRSP()
{
	int userRSP;
	printf("������ 1, ������ 2, ���� 3: ");
	scanf_s("%d", &userRSP);
	return userRSP;
}

char compareRSP(const int* com, const int* user)
{
	if (*com == *user)
		return 'D';

	else if (*com == 1)
	{
		if (*user == 2)
			return 'L';
		else if (*user == 3)
			return 'W';
	}

	else if (*com == 2)
	{
		if (*user == 3)
			return 'L';
		else if (*user == 1)
			return 'W';
	}

	else if (*com == 3)
	{
		if (*user == 1)
			return 'L';
		else if (*user == 2)
			return 'W';
	}
}

void printRSP(const int* com, const int* user)
{
	if (*user == 1)
		printf("����� ���� ����, ");
	else if (*user == 2)
		printf("����� ���� ����, ");
	else if (*user == 3)
		printf("����� �� ����, ");

	if (*com == 1)
		printf("��ǻ�ʹ� ���� ����, ");
	else if (*com == 2)
		printf("��ǻ�ʹ� ���� ����, ");
	else if (*com == 3)
		printf("��ǻ�ʹ� �� ����, ");

	if (compareRSP(com, user) == 'W')
		printf("�̰���ϴ�!\n");
	else if (compareRSP(com, user) == 'L')
		printf("�����ϴ�!\n");
	else if (compareRSP(com, user) == 'D')
		printf("�����ϴ�!\n");
}

int main()
{
	srand((int)time(NULL));
	int win = 0, lose = 0, draw = 0;
	int comRSP = 0, userRSP = 0;
	while (lose == 0)
	{
		comRSP = getComRSP();
		userRSP = getUserRSP();
		printRSP(&comRSP, &userRSP);
		if (compareRSP(&comRSP, &userRSP) == 'W')
			win++;
		else if (compareRSP(&comRSP, &userRSP) == 'L')
			lose++;
		else if (compareRSP(&comRSP, &userRSP) == 'D')
			draw++;
	}
	printf("������ ���: %d��, %d��\n", win, draw);
	return 0;
}