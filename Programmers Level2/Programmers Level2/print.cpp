#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
	int answer = 0;
	priority_queue<int> pq;
	queue<pair<int, int>> q;

	for (int i = 0; i < priorities.size(); i++)
	{
		pq.push(priorities[i]);
		q.push(make_pair(priorities[i], i));
	}

	while (true)
	{
		if (pq.top() == q.front().first)
		{
			if (q.front().second == location)
			{
				break;
			}
			else
			{
				answer++;
				pq.pop();
				q.pop();
			}
		}
		else
		{

			q.push(q.front());
			q.pop();
		}
	}

	return answer + 1;
}

int main()
{
	cout << solution({ 2,1,3,2 }, 2) << '\n';
	cout << solution({ 1,1,9,1,1,1 }, 0);
}