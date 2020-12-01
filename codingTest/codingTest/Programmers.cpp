#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b)
{
	long long answer = 0;

	vector<long long> middleNum;

	if (b < a) swap(a, b);

	for (int i = a; i <= b; i++)
	{
		middleNum.push_back(i);
	}

	for (int i = 0; i < middleNum.size(); i++)
	{
		//cout << middleNum[i] << '\n';
		answer += middleNum[i];
	}
	return answer;
}
int main()
{
	cout << solution(3, 3);

	return 0;
}