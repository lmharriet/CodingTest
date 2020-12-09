#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
�� ���� ������ ��

���� ����
�� ���� a, b�� �־����� �� a�� b ���̿� ���� ��� ������ ���� �����ϴ� �Լ�, solution�� �ϼ��ϼ���.
���� ��� a = 3, b = 5�� ���, 3 + 4 + 5 = 12�̹Ƿ� 12�� �����մϴ�.

���� ����
a�� b�� ���� ���� �� �� �ƹ� ���� �����ϼ���.
a�� b�� -10,000,000 �̻� 10,000,000 ������ �����Դϴ�.
a�� b�� ��Ұ���� ���������� �ʽ��ϴ�.
*/
long long solution(int a, int b) {
	long long answer = 0;

	if (a == b)return a;

	if (b < a) swap(a, b);

	for (int i = a; i <= b; i++)
	{
		answer += i;
	}

	return answer;
}