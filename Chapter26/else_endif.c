#include <stdio.h>
#define HIT_NUM	5

int main()
{
#if HITNUM == 5
	puts("��ũ�� ��� HITNUM�� ���� 5�Դϴ�.");
#else
	puts("��ũ�� ��� HITNUM�� ���� 6�Դϴ�.");
#endif
	return 0;
}