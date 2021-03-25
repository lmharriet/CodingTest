#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;

long long solution(int n, vector<int> works) {
	long long answer = 0;
	long long leaves = 0;
	priority_queue<int> pq;

	for (int i = 0; i < works.size(); i++)
	{
		pq.push(works[i]);
	}

	while (n > 0)
	{
		leaves = pq.top();
		pq.pop();
		n--;
		if (leaves - 1 > 0)
		{
			leaves--;
			pq.push(leaves);
		}

		if (pq.empty())
		{
			answer = 0;
			break;
		}
	}

	while(!pq.empty())
	{
		answer += pow(pq.top(), 2);
		pq.pop();
	}
	return answer;
}

int main()
{
	cout << solution(4, { 4,3,3 }) << '\n';
	cout << solution(1, { 2, 1, 2 }) << '\n';
	cout << solution(3, { 1,1 });
	return 0;
}