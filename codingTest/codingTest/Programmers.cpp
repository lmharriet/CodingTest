#include <iostream>
#include <string>
#include <vector>

//��� ���� ��������
using namespace std;

string solution(string s) {
	string answer = "";

	int len = s.length();

	if (len % 2 == 0)
	{
		answer += s[len / 2 - 1];
		// '' + 'c' = 'c'
		answer += s[len / 2];
		//answer = 'c' + 'd'
		// 'c' + 'd' = "cd"
	}
	// Ȧ��
	else
	{
		// 0 1 2 3 4
		// a b c d e

		// 5 / 2 = 2 (2�� �ε����� �߾�)

		// 0 1 2
		// a b c

		// 3 / 2 = 1

		answer = s[len / 2];
	}

	return answer;
}
int main()
{
	cout << solution("qwert");

	return 0;
}