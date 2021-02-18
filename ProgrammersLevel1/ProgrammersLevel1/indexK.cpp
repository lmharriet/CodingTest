#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


vector<int> indexK(vector<int> array, vector<vector<int>> commands)
{
	vector<int> answer;
	vector<int> numbers;

	int size = commands.size();

	for (int i = 0; i < size; i++)
	{
		for (int j = commands[i][0] - 1; j < commands[i][1]; j++)
		{
			numbers.emplace_back(array[j]);

		}
		sort(numbers.begin(), numbers.end());
		int kNum = (commands[i][2]) - 1;
		answer.emplace_back(numbers[kNum]);

		numbers.clear();

	}

	return answer;
}

//int main()
//{
//	vector<int> kNum = solution({ 1,5,2,6,3,7,4 }, { {2,5,3},{4,4,1},{1,7,3} });
//
//	for (int i = 0; i < kNum.size(); i++)
//	{
//		cout << kNum[i] << ',';
//	}
//
//	//solution({ 1,5,2,6,3,7,4 }, { {2,5,3},{4,4,1},{1,7,3} });
//
//	return 0;
//}