#include <iostream>
#include <string>
#include <vector>

using namespace std;
/*
�׷� �ܾ�� �ܾ �����ϴ� ��� ���ڿ� ���ؼ�, �� ���ڰ� �����ؼ� ��Ÿ���� ��츸�� ���Ѵ�.
���� ���, ccazzzzbb�� c, a, z, b�� ��� �����ؼ� ��Ÿ����, kin�� k, i, n�� �����ؼ� ��Ÿ���� ������ �׷� �ܾ�������,
aabbbccb�� b�� �������� ��Ÿ���� ������ �׷� �ܾ �ƴϴ�.

�ܾ� N���� �Է����� �޾� �׷� �ܾ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
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