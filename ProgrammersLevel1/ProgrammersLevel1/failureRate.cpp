#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int N, vector<int> stages) {
	vector<int> answer;
	//N은 스테이지
	//stages의 값== 현재 도전 중인 스테이지의 번호
	float arr[501] = { 0, };
	int index[501];
	int size = stages.size(), challenge = stages.size();
	int failedUser = 0;

	sort(stages.begin(), stages.end());

	for (int i = 1; i <= N; i++)
	{
		index[i] = i;
		for (int j = 0; j < size; j++)
		{
			if (i == stages[j])
			{
				failedUser++;

			}
		}
		if (failedUser != 0)
		{
			arr[i] = failedUser / (float)challenge;
		}
		challenge -= failedUser;
		failedUser = 0;
	}

	for (int i = 1; i < N; i++)
	{
		for (int j = i + 1; j <= N; j++)
		{
			if (arr[i] < arr[j])
			{
				swap(arr[i], arr[j]);
				swap(index[i], index[j]);

			}
			else if (arr[i] == arr[j])
			{
				if (index[i] > index[j])
				{
					swap(arr[i], arr[j]);
					swap(index[i], index[j]);
				}
			}
		}
	}


	for (int i = 1; i <= N; i++)
	{
		answer.emplace_back(index[i]);
	}

	return answer;
}

int main()
{
	auto a = solution(5, { 2,1,2,6,2,4,3,3 });

	for (int i : a)
	{
		cout << i << " , ";
	}

	return 0;
}