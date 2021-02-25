#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr)
{
	vector<int> answer;
	vector<int> greater = arr;
	int size = arr.size();
	int min = 0;
	if (size == 1) answer.emplace_back(-1);
	else
	{
		sort(greater.begin(), greater.end());
		for (int i = 0; i < size; i++)
		{
			if (arr[i] == greater[0])
			{
				min = arr[i];
				break;
			}
		}

		for (int i = 0; i < size; i++)
		{
			if (arr[i] == min)
			{
				min = -1;
				continue;
			}
			answer.emplace_back(arr[i]);
		}
	}
	return answer;
}

//int main()
//{
//	auto v = removeMinNum({ 1,2,3,1 });
//
//	for (auto n : v)
//	{
//		cout << n;
//	}
//	return 0;
//}