#include <iostream>
#include <string>
using namespace std;

/*
"OOXXOXXOOO"�� ���� OX������ ����� �ִ�. O�� ������ ���� ���̰�, X�� ������ Ʋ�� ���̴�.
���� ��� �� ������ ������ �� �������� ���ӵ� O�� ������ �ȴ�.
���� ���,
"OOXXOXXOOO"�� ������ 1+2+0+0+1+0+0+1+2+3 =10���̴�.
OX������ ����� �־����� ��, ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
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