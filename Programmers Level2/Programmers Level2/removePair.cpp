#include <iostream>
#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
	int length = s.length();
	stack<char> st;

	for (int i = 0; i < length; i++)
	{
		if (st.empty())
		{
			st.push(s[i]);
		}
		else
		{
			if (st.top() == s[i])
			{
			
				st.pop();
			}
			else
			{
				st.push(s[i]);
			}
		}
	}
	if (st.empty()) return 1;

	return 0;
}

int main()
{
	cout << solution("cdcd");
	return 0;
}