#ifndef __SEARCH_H__
#define __SEARCH_H__

#include "Info.h"

void getName(char* inputName);
int cntName(const Info* info, const int* infoNum, const char* inputName);
int* searchIdx(const Info* info, const int* infoNum, const char* inputName, const int cnt);

#endif