#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Info.h"
#include "GetItem.h"
#include "EditInfo.h"
#include "PrintInfo.h"
#include "AdminText.h"

int main()
{
	char item;
	int infoNum = 0;
	Info* info = NULL;
	adminText(&info, &infoNum, 'L');
	while(1)
	{
		init();
		item = getItem();
		if (item == '1')
			insertInfo(&info, &infoNum);
		else if (item == '2')
			deleteInfo(&info, &infoNum);
		else if (item == '3')
			printSearchInfo(&info, &infoNum);
		else if (item == '4')
			printInfo(&info, &infoNum);
		else if (item == '5')
		{
			adminText(&info, &infoNum, 'S');
			free(info);
			break;
		}
		else
			puts("Enter only right number");
	}
	return 0;
}