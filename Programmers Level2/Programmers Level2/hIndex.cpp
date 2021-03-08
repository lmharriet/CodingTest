#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
	return a > b;
}
int solution(vector<int> citations) {
	int answer = 0;
	int size = citations.size();
	sort(citations.begin(), citations.end(), compare);
	for (int i = 0; i < size; i++)
	{
		if (i < citations[i])
		{
			answer++;
		}
	}
	return answer;
}

int main()
{
	cout << solution({ 3, 0, 6, 1, 5 });
	return 0;
}