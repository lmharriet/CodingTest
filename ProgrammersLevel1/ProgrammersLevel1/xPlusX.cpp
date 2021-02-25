#include <iostream>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
	vector<long long> answer;
	long long sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += x;
		answer.emplace_back(sum);
	}

	return answer;
}

int main()
{
	auto a = solution(-4, 2);
	for (auto v : a)
	{
		cout << v << " ";
	}

}