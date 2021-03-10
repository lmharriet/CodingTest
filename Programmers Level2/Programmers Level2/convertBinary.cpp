#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(char a, char b)
{
	return a > b;
}
vector<int> solution(string s) {
	vector<int> answer;
	string convert;
	int len = 0;
	int  zeroCount = 0, convertCount = 0;;

	sort(s.begin(), s.end(), compare);

	while (true)
	{
		if (s.back() == '0')
		{
			s.pop_back();
			zeroCount++;
		}
		
		else if(s.length()>1)
		{

			convertCount++;
			len = s.length();
			while (len>0)
			{
				convert += to_string(len % 2);
				len /= 2;
			}

			s = convert;
			sort(s.begin(), s.end(), compare);
			convert.clear();

		}
		else
		{
			convertCount++;
			answer.emplace_back(convertCount);
			answer.emplace_back(zeroCount);
			break;
		}
	
	}
	return answer;
}

int main()
{

	//solution("1111000");
	solution("01110");
	solution("110010101001");
	solution("1111111");
	return 0;
}