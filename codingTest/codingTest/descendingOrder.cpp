#include <iostream>
#include <vector>
#include <string>
/*
���ڿ� ��������
���ڿ� s�� ��Ÿ���� ���ڸ� ū�ͺ��� ���� ������ ������ ���ο� ���ڿ��� �����ϴ� �Լ�, solution�� �ϼ����ּ���.
s�� ���� ��ҹ��ڷθ� �����Ǿ� ������, �빮�ڴ� �ҹ��ں��� ���� ������ �����մϴ�.

���� ����
str�� ���� 1 �̻��� ���ڿ��Դϴ�.
*/

using namespace std;

string solution(string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		for (int j = 1; j < s.length() - i; j++)
		{
			if (s[j - 1] < s[j])
			{
				char temp = s[j - 1];
				s[j - 1] = s[j];
				s[j] = temp;
			}
		}
	}

	return s;
}

int main()
{
	cout<<solution("asdyGUYgy");
}
