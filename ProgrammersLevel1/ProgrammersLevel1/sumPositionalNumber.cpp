#include <iostream>

using namespace std;
/*
�ڸ��� ���ϱ�

�ڿ��� N�� �־�����, N�� �� �ڸ����� ���� ���ؼ� return �ϴ� solution �Լ��� ����� �ּ���.
������� N = 123�̸� 1 + 2 + 3 = 6�� return �ϸ� �˴ϴ�.

���ѻ���
N�� ���� : 100,000,000 ������ �ڿ���
*/

int solution(int n)
{
	int answer = 0;

	int num = n;

	while (true)
	{
		int last = num % 10;

		answer += last;
		num /= 10;

		if (num == 0)break;
	}

	return answer;
}