#include <stdio.h>
#define HIT_NUM	5

int main()
{
#if HITNUM == 5
	puts("매크로 상수 HITNUM은 현재 5입니다.");
#else
	puts("매크로 상수 HITNUM은 현재 6입니다.");
#endif
	return 0;
}