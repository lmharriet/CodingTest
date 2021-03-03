#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
	string answer = "";
	int length = s.length();
	int index = 0;

	for (int i = 0; i < length; i++)
	{
		if (s[i] == ' ')
		{
			index = 0;
			answer += s[i];
			continue;
		}

		if (index == 0)
		{
			answer += toupper(s[i]);
		}
		else
		{
			answer += tolower(s[i]);
		}

		index++;
	}

	return answer;
}

int main()
{
	cout<<solution("3people unFollowed me")<<'\n';
	cout<<solution("for the last week");
	return 0;
}