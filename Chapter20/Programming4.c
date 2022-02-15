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
	printf("바위는 1, 가위는 2, 보는 3: ");
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
		printf("당신은 바위 선택, ");
	else if (*user == 2)
		printf("당신은 가위 선택, ");
	else if (*user == 3)
		printf("당신은 보 선택, ");

	if (*com == 1)
		printf("컴퓨터는 바위 선택, ");
	else if (*com == 2)
		printf("컴퓨터는 가위 선택, ");
	else if (*com == 3)
		printf("컴퓨터는 보 선택, ");

	if (compareRSP(com, user) == 'W')
		printf("이겼습니다!\n");
	else if (compareRSP(com, user) == 'L')
		printf("졌습니다!\n");
	else if (compareRSP(com, user) == 'D')
		printf("비겼습니다!\n");
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
	printf("게임의 결과: %d승, %d무\n", win, draw);
	return 0;
}