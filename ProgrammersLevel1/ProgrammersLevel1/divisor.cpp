#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
����� ��

���� ����
���� n�� �Է¹޾� n�� ����� ��� ���� ���� �����ϴ� �Լ�, solution�� �ϼ����ּ���.

���� ����
n�� 0 �̻� 3000������ �����Դϴ�.

ex)
n	return
12	28
5	6
*/
int solution(int n)
{
	int answer = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			answer += i;
		}
	}
	return answer;
}