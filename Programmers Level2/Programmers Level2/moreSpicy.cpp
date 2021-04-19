#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> scoville, int K) {
	int answer = 0;
	int count = 0;
	int minScovile;
	priority_queue<int, vector<int>, greater<int>> pq(scoville.begin(),scoville.end()); 

	while (!pq.empty())
	{
		count++;
		if (pq.top() < K)
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
		else
		{
			return answer;
		}

		if (count == scoville.size()-1 && answer == 0) return -1;
	}

}

int main()
{
	cout << solution({ 1,2,3,9,10,12 },1000);
	return 0;
}