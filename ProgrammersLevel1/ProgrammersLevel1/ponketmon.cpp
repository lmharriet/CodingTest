#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int solution(vector<int> nums)
{
	int answer = 0;
	unordered_set<int>s;

	for (int i = 0; i < nums.size(); i++)
	{
		s.insert(nums[i]);
	}

	if (s.size() > nums.size() / 2)
	{
		answer = nums.size() / 2;
	}
	else
	{
		answer = s.size();
	}

	return answer;
}

int main()
{
	cout <<	solution({ 3,1,2,3 })<<'\n';
	cout <<	solution({ 3,3,3,2,2,4 })<<'\n';
	cout <<	solution({ 3,3,3,2,2,2 });
	return 0;
}