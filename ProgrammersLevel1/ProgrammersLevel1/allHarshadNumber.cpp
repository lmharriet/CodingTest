#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
���� ���� x�� �ϻ��� ���̷��� x�� �ڸ����� ������ x�� ���������� �մϴ�.
���� ��� 18�� �ڸ��� ���� 1+8=9�̰�, 18�� 9�� ������ �������Ƿ� 18�� �ϻ��� ���Դϴ�.
�ڿ��� x�� �Է¹޾� x�� �ϻ��� ������ �ƴ��� �˻��ϴ� �Լ�, solution�� �ϼ����ּ���.
*/

bool HarshadNum(int x) 
{
	int temp = x;
	int sum = 0;
	while (temp > 0)
	{
		sum += temp % 10;
		temp /= 10;
	}
	if (x % sum == 0)return true;
	else return false;
}
//int main()
//{
//	solution(10);
//	return 0;
//}