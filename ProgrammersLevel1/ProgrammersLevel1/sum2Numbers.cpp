#include<iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;
//2,1,3,4,1
vector<int> solution(vector<int> numbers) {

	vector<int>answer;
	set<int> sum;
	set<int>::iterator iter;

	int count = 0;
	for (int i = 0; i < numbers.size() - 1; i++)
	{
		for (int j = i + 1; j < numbers.size(); j++)
		{
			sum.insert(numbers[i] + numbers[j]);
			cout << numbers[i] + numbers[j];
		}
	}
	
	for (iter = sum.begin(); iter != sum.end(); ++iter)
	{
		answer.push_back(*iter);
	}

	return answer;
}

int main()
{
	vector<int> output;

	output = solution({ 2,1,3,4,1 });

	return 0;
}