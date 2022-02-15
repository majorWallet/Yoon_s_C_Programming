#include <stdio.h>

typedef enum syllable
{
	Do = 1, Re = 2, Mi = 3, Fa = 4, So = 5, La = 6, Ti = 7
} Syllable;

void Sound(Syllable sy)
{
	switch (sy)
	{
	case Do:
		fputs("���� �Ͼ� ������!\n", stdout); return;
	case Re:
		fputs("���� �ձ� ���ڵ�!\n", stdout); return;
	case Mi:
		fputs("�̴� �Ķ� �̳���!\n", stdout); return;
	case Fa:
		fputs("�Ĵ� ���� �Ķ���!\n", stdout); return;
	case So:
		fputs("���� ���� �ֹ��!\n", stdout); return;
	case La:
		fputs("��� �������~!\n", stdout); return;
	case Ti:
		fputs("�ô� ���� �ó���!\n", stdout); return;
	}
}

int main()
{
	Syllable tone;
	for (tone = Do; tone <= Ti; tone += 1)
		Sound(tone);
	return 0;
}