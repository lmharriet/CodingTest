#include <iostream>
#include <string>
#include <vector>

using namespace std;
/*
�̻��� ���� �����

���ڿ� s�� �� �� �̻��� �ܾ�� �����Ǿ� �ֽ��ϴ�. �� �ܾ�� �ϳ� �̻��� ���鹮�ڷ� ���еǾ� �ֽ��ϴ�.
�� �ܾ��� ¦����° ���ĺ��� �빮�ڷ�, Ȧ����° ���ĺ��� �ҹ��ڷ� �ٲ� ���ڿ��� �����ϴ� �Լ�, solution�� �ϼ��ϼ���.

���� ����
���ڿ� ��ü�� ¦/Ȧ�� �ε����� �ƴ϶�, �ܾ�(������ ����)���� ¦/Ȧ�� �ε����� �Ǵ��ؾ��մϴ�.
ù ��° ���ڴ� 0��° �ε����� ���� ¦����° ���ĺ����� ó���ؾ� �մϴ�.
try hello world

012 01234 01234

//tolower , toupper

*/


char _2lower(char c)
{
	char output;
	if (c >= 'a' && c <= 'z') output = c;
	else output = c + 32;
	return output;
}

char _2Upper(char c)
{
	char output;
	if (c >= 'A' && c <= 'Z') output = c;
	else output = c - 32;
	return output;
}

string WeirdWord(string s)
{
	int count = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ')
		{
			count = 0;
			continue;
		}

		if (count % 2 == 0)
		{
			s[i] = _2Upper(s[i]);
		}
		else s[i] = _2lower(s[i]);

		count++;
	}

	return s;
}

//void main()
//{
//	cout << WeirdWord("programmers is so cool");
//}