#include <iostream>
#include <string>
#include <vector>

using namespace std;
/*
그룹 단어란 단어에 존재하는 모든 문자에 대해서, 각 문자가 연속해서 나타나는 경우만을 말한다.
예를 들면, ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고, kin도 k, i, n이 연속해서 나타나기 때문에 그룹 단어이지만,
aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.

단어 N개를 입력으로 받아 그룹 단어의 개수를 출력하는 프로그램을 작성하시오.
*/
int GroupChecker()
{
	int num;
	cin >> num;
	string* words = new string[num];
	int count = 0;

	for (int i = 0; i < num; i++)
	{
		cin >> words[i];
	}

	for (int i = 0; i < num; i++)
	{
		bool isGroupWord = true;
		char save = words[i][0];
		vector<char> checker;
		checker.push_back(save);

		for (int j = 1; j < words[i].length(); j++)
		{
			if (save == words[i][j]) continue;
			else
			{
				isGroupWord = true;
				for (int k = 0; k < checker.size(); k++)
				{
					if  (words[i][j] == checker[k])
					{
						isGroupWord = false;
						break;
					}
				}

				if (!isGroupWord)
				{
					break;
				}

				else
				{
					save = words[i][j];
					checker.push_back(save);

				}

			}
		}

		if (isGroupWord) count++;
	}

	
	cout << count;

	return 0;

}