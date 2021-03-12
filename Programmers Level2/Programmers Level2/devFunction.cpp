#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
	vector<int> answer;
	stack<int> st;
	int size = progresses.size(), progress = 0;
	int day = 0, count = 0;
	for (int i = size - 1; i >= 0; i--)
	{
		progress = 100 - progresses[i];
		if (progress % speeds[i] == 0)
		{
			st.push(progress / speeds[i]);
		}
		else
		{
			st.push((progress / speeds[i]) + 1);
		}
	}

	for (int i = 0; i < size; i++)
	{
		if (st.empty()) continue;
		day = st.top();
		count++;
		st.pop();

		while (true)
		{
			if (st.empty()) break;
			if (st.top() <= day)
			{
				count++;
				st.pop();
			}
			else
			{
				break;
			}
		}
		answer.emplace_back(count);
		count = 0;
	}

	return answer;
}

int main()
{

	//vector<int> a = solution({ 93, 30, 55 }, { 1, 30, 5 });
	vector<int> a = solution({ 95, 90, 99, 99, 80, 99 }, { 1, 1, 1, 1, 1, 1 });
	
	for (int i=0;i<a.size();i++)
	{
		cout << a[i]<<',';
	}
	//solution({ 93, 30, 55 }, { 1, 30, 5 });
	//solution({ 95, 90, 99, 99, 80, 99 }, { 1, 1, 1, 1, 1, 1 });
	return 0;
}