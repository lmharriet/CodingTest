#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> scoville, int K) {
	int answer = 0;
	int count = 0;
	int minScovile;
	priority_queue<int, vector<int>, greater<int>> pq(scoville.begin(), scoville.end());

	if (K == 0) return 0;
	while (pq.top() < K)
	{
		minScovile = pq.top();
		pq.pop();

		if (!pq.empty())
		{
			minScovile = minScovile + pq.top() * 2;
			pq.pop();

			if (minScovile < K)
			{
				pq.push(minScovile);
			}
			answer++;

		}
		else
		{
			return -1;
		}

	}
	return answer;
}

int main()
{
	cout << solution({ 1,2,3,9,10,12 }, 7);
	cout << solution({ 2,3,7,10,15 }, 7);
	return 0;
}