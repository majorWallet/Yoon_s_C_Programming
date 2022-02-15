#include <stdio.h>
#include <string.h>

void getNameAge(char* user, char* userName, char* userAge);
int compareAge(char* age1, char* age2);
int compareName(char* name1, char* name2);

int main()
{
	char user1[30], user1Name[25], user1Age[5];
	char user2[30], user2Name[25], user2Age[5];
	fgets(user1, sizeof(user1) / sizeof(char), stdin);
	user1[strlen(user1) - 1] = '\0';
	fgets(user2, sizeof(user2) / sizeof(char), stdin);
	user2[strlen(user2) - 1] = '\0';
	getNameAge(user1, user1Name, user1Age);
	getNameAge(user2, user2Name, user2Age);
	if (!compareName(user1Name, user2Name))
		fputs("이름이 동일합니다.\n", stdout);
	else
		fputs("이름이 동일하지 않습니다.\n", stdout);
	if (!compareAge(user1Age, user2Age))
		fputs("나이가 동일합니다.\n", stdout);
	else
		fputs("나이가 동일하지 않습니다.\n", stdout);
	return 0;
}

void getNameAge(char* user, char* userName, char* userAge)
{
	for (int i = 0; i < 30; i++)
	{
		if (user[i] == 32)
		{
			for (int j = 0; user[j] != 32; j++)
			{
				userName[j] = user[j];
			}
			userName[i] = '\0';
			int ageIdx = 0;
			for (int j = i + 1; user[j] != '\0'; j++, ageIdx++)
			{
				userAge[ageIdx] = user[j];
			}
			userAge[ageIdx] = '\0';
			break;
		}
	}
}

int compareAge(char* age1, char* age2)
{
	if (strlen(age1) < strlen(age2))
		return strncmp(age1, age2, strlen(age1));
	else
		return strncmp(age1, age2, strlen(age2));
}

int compareName(char* name1, char* name2)
{
	if (strlen(name1) < strlen(name2))
		return strncmp(name1, name2, strlen(name1));
	else
		return strncmp(name1, name2, strlen(name2));
}