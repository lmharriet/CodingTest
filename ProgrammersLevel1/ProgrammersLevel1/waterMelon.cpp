#include <iostream>
using namespace std;
/*
 ���ڼ��ڼ��ڼ�

���̰� n�̰�, ���ڼ��ڼ��ڼ�....�� ���� ������ �����ϴ� ���ڿ��� �����ϴ� �Լ�, solution�� �ϼ��ϼ���. 
������� n�� 4�̸� ���ڼ����� �����ϰ� 3�̶�� ���ڼ��� �����ϸ� �˴ϴ�.

���� ����
n�� ���� 10,000������ �ڿ����Դϴ�.
*/

#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    string a = "��";
    string b = "��";

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            answer += a;
        }
        else
        {
            answer += b;
        }
    }
    return answer;
}