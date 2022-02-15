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
		fputs("도는 하얀 도라지!\n", stdout); return;
	case Re:
		fputs("레는 둥근 레코드!\n", stdout); return;
	case Mi:
		fputs("미는 파란 미나리!\n", stdout); return;
	case Fa:
		fputs("파는 예쁜 파랑새!\n", stdout); return;
	case So:
		fputs("솔은 작은 솔방울!\n", stdout); return;
	case La:
		fputs("라는 라디오고요~!\n", stdout); return;
	case Ti:
		fputs("시는 졸졸 시냇물!\n", stdout); return;
	}
}

int main()
{
	Syllable tone;
	for (tone = Do; tone <= Ti; tone += 1)
		Sound(tone);
	return 0;
}