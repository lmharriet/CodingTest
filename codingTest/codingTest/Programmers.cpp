#include <iostream>
#include <string>
#include <vector>

//��� ���� ��������
using namespace std;

#include <string>
#include <vector>

using namespace std;

//���ڿ��� ������ �ٲٱ�

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