#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
���ڿ� �ٷ�� �⺻

���ڿ� s�� ���̰� 4 Ȥ�� 6�̰�, ���ڷθ� �������ִ��� Ȯ�����ִ� �Լ�, solution�� �ϼ��ϼ���. 
���� ��� s�� a234�̸� False�� �����ϰ� 1234��� True�� �����ϸ� �˴ϴ�.

���� ����
s�� ���� 1 �̻�, ���� 8 ������ ���ڿ��Դϴ�.*/
bool BackString(string s) {

	bool answer = true;

	if (s.size() == 6 || s.size() == 4)
	{
		for (int i = 0; i < s.size(); i++)
		{
			int asc = (int)s[i];

			if ((asc >= 48 && asc <= 57) == false)
			{
				return false;
			}
		}
		return true;
	}

	return false;
}