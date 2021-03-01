#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int solution(string dartResult) {
	int answer = 0;
	int length = dartResult.length();
	int score[3] = { 0, };

	int preScore = 0;
	int chance = 0;

	

	for (int i = 0; i < length; i++)
	{
		if (dartResult[i] >= '0' && dartResult[i] <= '9')
		{
			if (i != 0)
				chance++;

			if (dartResult[i + 1] == '0')
			{
				preScore = 10;
				i++;
			}
			else
			{
				preScore = dartResult[i] - '0';
			}
		}
		else if (dartResult[i] == 'S')
		{
			score[chance] = pow(preScore, 1);
		}
		else if (dartResult[i] == 'D')
		{
			score[chance] = pow(preScore, 2);
		}
		else if (dartResult[i] == 'T')
		{
			score[chance] = pow(preScore, 3);
		}
		else if (dartResult[i] == '*')
		{
			if (chance !=0)
			{
				score[chance] *= 2;
				score[chance -1] *= 2;
			}
			else
			{
				score[chance] *= 2;
			}
		}
		else if (dartResult[i] == '#')
		{
			score[chance] *= -1;
		}
	}
	for (int i = 0; i < 3; i++) 
	{
		answer += score[i];
	}

	//cout << score[0] << " , "<<score[1] << " , " << score[2] << " :" << answer << '\n';

	return answer;
}

int main()
{
	cout << solution("1S2D*3T") << '\n';
	cout << solution("1D2S#10S") << '\n';
	cout << solution("1D2S0T") << '\n';
	cout << solution("1S*2T*3S") << '\n';
	cout << solution("1D#2S*3S") << '\n';
	cout << solution("1T2D3D#") << '\n';
	cout << solution("1D2S3T*") << '\n';
	return 0;
}