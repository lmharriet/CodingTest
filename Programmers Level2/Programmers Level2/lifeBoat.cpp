#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> people, int limit) {
	int answer = 0;
	int head = 0, tail = people.size() - 1;
	sort(people.begin(), people.end());

	while (head <= tail)
	{
		if (people[head] + people[tail] <= limit)
		{
			answer++;
			head++;
			tail--;
		}
		else
		{
			answer++;
			tail--;
		}
	}

	return answer;
}

int main()
{
	int a = solution({ 70, 80, 50 }, 100);


	cout << a;

	return 0;
}