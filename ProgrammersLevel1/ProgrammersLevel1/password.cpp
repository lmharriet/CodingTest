#include <iostream>
#include <vector>
#include <string>
using namespace std;

string solution(string s, int n) {
	string answer = "";

	int size = s.size();
	int alphabet = 0;
	
	for (int i = 0; i < size; i++)
	{
		if (s[i] == ' ') answer += s[i];

		else
		{
			if (s[i] >= 'a')
			{
				if (s[i] + n > 'z')
				{
					alphabet = s[i] + n - 26;
				}
				else
				{
					alphabet = s[i] + n;
				}
				answer += (char)alphabet;
			}
			else
			{

				if (s[i] + n > 'Z')
				{
					alphabet = s[i] + n - 26;
				}
				else
				{
					alphabet = s[i] + n;
				}
				answer += (char)alphabet;
			}

		
		}

	}

	return answer;
}

int main()
{
	cout << solution("y A b", 7);


	return 0;
}