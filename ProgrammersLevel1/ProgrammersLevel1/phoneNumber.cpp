#include<iostream>
#include <string>
#include <vector>

using namespace std;

/*���α׷��ӽ� ������� �������� ��ȣ�� ���� �������� ���� �� ������ ��ȭ��ȣ�� �Ϻθ� �����ϴ�.
��ȭ��ȣ�� ���ڿ� phone_number�� �־����� ��, ��ȭ��ȣ�� �� 4�ڸ��� ������ ������ ���ڸ� ���� *���� ���� ���ڿ��� �����ϴ� �Լ�, 
solution�� �ϼ����ּ���.

���� ����
s�� ���� 4 �̻�, 20������ ���ڿ��Դϴ�.
*/

string solution(string phone_number) {
	string answer = "";

	for (int i = 0; i < phone_number.length(); i++)
	{
		if (i < phone_number.length() - 4)
			phone_number[i] = '*';

		answer = phone_number;
	}
	return answer;
}