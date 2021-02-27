#include<iostream>
#include<vector>

using namespace std;

vector<int> MathTest(vector<int> answers)
{
	vector<int> answer;
	vector<vector<int>> person = { {1,2,3,4,5} ,{2,1,2,3,2,4,2,5 } ,{3,3,1,1,2,2,4,4,5,5} };
	int counts[3] = { 0,0,0 };
	for (int i = 0; i < person.size(); i++)
	{
		for (int j = 0; j < answers.size(); j++)
		{
			int modular = j % (person[i].size());
			if (person[i][modular] == answers[j])
			{
				counts[i]++;
			}
		}
	}

	int max = counts[0];

	for (int i = 1; i < 3; i++)
	{
		if (counts[i] > max) max = counts[i];
	}

	for (int i = 0; i < 3; i++)
	{
		if (counts[i] == max)
		{
			answer.push_back(i + 1);
		}
	}

	return answer;
}

//int main()
//{
//	vector<int> v = MathTest({1,2,3,4,5,1,2,3,4,5,1,2,3,4,5 });
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i];
//	}
//	return 0;
//}
