#include <iostream>
#include <string>
#include <vector>

//가운데 글자 가져오기
using namespace std;

#include <string>
#include <vector>

using namespace std;

//문자열을 정수로 바꾸기

int solution(string s)
{

	int answer = 0;

	if (s[0] == '-')
	{
		if (s[1] == '0') s.erase(0, 2);
		else s.erase(0, 1);
		answer = stoi(s, nullptr, 10);
		answer *= -1;
	}
	else
	{
		if (s[0] == '0') s.erase(0, 1);
		answer = stoi(s, nullptr, 10);

	}

		return answer;
}

int main()
{
	cout << solution("034");
	//string a = "1234";
	//
	//int num =stoi(a, nullptr, 10);
	//cout << num;
	//
	return 0;
}