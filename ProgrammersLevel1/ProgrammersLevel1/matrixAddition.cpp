#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
	vector<vector<int>> answer;

	int size = arr1.size();

	for (int i = 0; i < size; i++)
	{
		answer.emplace_back(arr1[i]);
		for (int j = 0; j < arr1[i].size(); j++)
		{
			answer[i][j] = arr1[i][j] + arr2[i][j];
		}

	}

	return answer;
}

int main()
{
	vector<vector<int>> v= solution({ {1}, {2} }, { {3},{4} });

	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v[i].size(); j++)
		{
			cout << v[i][j]<<", ";
		}
		cout << '\n';
	}
	//solution({ {1}, {2} }, { {3},{4} });
	//solution({ {1,2}, {2,3} }, { {3,4},{5,6} });
}