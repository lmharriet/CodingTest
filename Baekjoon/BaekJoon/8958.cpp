#include <iostream>
#include <string>
using namespace std;

/*
"OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다. O는 문제를 맞은 것이고, X는 문제를 틀린 것이다.
맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다.
예를 들어,
"OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 =10점이다.
OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오.
*/

int oxQuiz()
{
	int N;
	cin >> N;
	string OX;
	int* score = new int[N];
	int num = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> OX;
		score[i] = 0;

		for (int j = 0; j < OX.length(); j++)
		{
			if (OX[j] == 'X')
			{
				num = 0;
			}
			if (OX[j] == 'O')
			{
				num++;
			}
			score[i] += num;
		}
		num = 0;
	}
	
	for (int i = 0; i < N; i++)
	{
		cout << score[i] << '\n';

	}

	return 0;
}