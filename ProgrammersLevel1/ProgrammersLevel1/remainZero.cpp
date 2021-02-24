#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector<int> remainZero(vector<int> arr, int divisor) {
	vector<int> answer;

	int size = arr.size();

	sort(arr.begin(), arr.end());

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % divisor != 0) continue;
		answer.emplace_back(arr[i]);
	}

	if (answer.empty()) answer.emplace_back(-1);

	return answer;
}

//int main()
//{
//	auto output = solution({ 2,36,1,3 }, 1);
//	for (auto it : output)
//	{
//		cout << it << " ";
//	}
//	return 0;
//}