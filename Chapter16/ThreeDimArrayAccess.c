#include <stdio.h>

int main()
{
	int mean = 0;
	int record[3][3][2] = {
		{
			{ 70, 80 },  //A 학급 학생 1의 성적
			{ 94, 90 },  //A 학급 학생 2의 성적
			{ 70, 85 }   //A 학급 학생 3의 성적
		},
		{
			{ 83, 90 },  //B 학급 학생 1의 성적
			{ 95, 60 },  //B 학급 학생 2의 성적
			{ 90, 82 }   //B 학급 학생 3의 성적
		},
		{
			{ 98, 89 },  //C 학급 학생 1의 성적
			{ 99, 94 },  //C 학급 학생 2의 성적
			{ 91, 87 }   //C 학급 학생 3의 성적
		}
	};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			for (int k = 0; k < 2; k++)
				mean += record[i][j][k];
		printf("%c 학급 전체 평균: %g\n", i + 65, (double)mean / 6);
		mean = 0;
	}
	return 0;
}