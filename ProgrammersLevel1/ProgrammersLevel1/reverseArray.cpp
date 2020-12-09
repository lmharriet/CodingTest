#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
�ڿ��� ������ �迭�� �����

���� ����
�ڿ��� n�� ������ �� �ڸ� ���ڸ� ���ҷ� ������ �迭 ���·� �������ּ���. ������� n�� 12345�̸� [5,4,3,2,1]�� �����մϴ�.

���� ����
n�� 10,000,000,000������ �ڿ����Դϴ�.
����� ��
n	      return
12345	[5,4,3,2,1]
*/

vector<int> solution(long long n) {
    vector<int> answer;

    while (n > 0)
    {
        int fnum = n % 10;
        n /= 10;

        answer.push_back(fnum);
    }

    return answer;
}