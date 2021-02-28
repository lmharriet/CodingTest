#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int getPowNum(char sdt)
{
	return 0;
}

int solution(string dartResult) {
	int answer = 0;
	int length = dartResult.length();
	vector<int> score;
	int num[3] = { 0, };
	// s ^1 d ^2 t ^3
	//나 이전 2배<- 나 2배(처음에 나오면 처음것만 2배) 
	//
	for (int i = 0; i < length; i++)
	{
		if (dartResult[i] == 83) // S
		{
			if (dartResult[i - 1] == 48) // S인덱스 -1 이 0이면
			{
				if (dartResult[i - 2] == 49) // 10이면 S인덱스 -2 가 1
				{
					score.emplace_back(pow(10, 1));
				}
				else //그냥 점수가 0일 경우
				{
					score.emplace_back(0);
				}
			}
			else if (dartResult[i - 1] >= 48 && dartResult[i - 1] <= 57)
			{
				score.emplace_back(pow(dartResult[i - 1] - 48, 1));

			}

		}
		else if (dartResult[i] == 68) // D
		{

			if (dartResult[i - 1] == 48) // S인덱스 -1 이 0이면
			{
				if (dartResult[i - 2] == 49) // 10이면 S인덱스 -2 가 1
				{
					score.emplace_back(pow(10, 2));
				}
				else //그냥 점수가 0일 경우
				{
					score.emplace_back(0);
				}
			}
			else if (dartResult[i - 1] >= 48 && dartResult[i - 1] <= 57)
			{
				score.emplace_back(pow(dartResult[i - 1] - 48, 2));

			}

		}
		else if (dartResult[i] == 84) // T
		{
			if (dartResult[i - 1] == 48) // S인덱스 -1 이 0이면
			{
				if (dartResult[i - 2] == 49) // 10이면 S인덱스 -2 가 1
				{
					score.emplace_back(pow(10, 3));
				}
				else //그냥 점수가 0일 경우
				{
					score.emplace_back(0);
				}
			}
			else if (dartResult[i - 1] >= 48 && dartResult[i - 1] <= 57)
			{
				score.emplace_back(pow(dartResult[i - 1] - 48, 3));

			}
		}


	}


	for (int i = 0; i < score.size(); i++)
	{
		cout << score[i] << '\n';
	}
	return answer;
}

int main()
{
	//점수 |보너스 |옵션
	solution("1S2D*3T") << '\n';
	solution("1D#0S*1T*");
	return 0;
}