#include<iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;
//2,1,3,4,1
vector<int> sum2Numbers(vector<int> numbers) {

	vector<int>answer;
	set<int> sum;

	int count = 0;
	for (int i = 0; i < numbers.size() - 1; i++)
	{
		for (int j = i + 1; j < numbers.size(); j++)
		{
			sum.insert(numbers[i] + numbers[j]);
		}
	}

	
	answer.assign(sum.begin(), sum.end());

	return answer;
}
//
//int main()
//{
//	vector<int> output;
//
//	output = solution({ 2,1,3,4,1 });
//	
//	for (int i = 0; i < output.size(); i++)
//	{
//		cout << output[i] << '\n';
//	}
//
//	return 0;
//}