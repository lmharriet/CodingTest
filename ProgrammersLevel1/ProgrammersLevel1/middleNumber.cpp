#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
��� ���� ��������

�ܾ� s�� ��� ���ڸ� ��ȯ�ϴ� �Լ�, solution�� ����� ������. �ܾ��� ���̰� ¦����� ��� �α��ڸ� ��ȯ�ϸ� �˴ϴ�.

���ѻ���
s�� ���̰� 1 �̻�, 100������ ��Ʈ���Դϴ�.
*/

string solution(string s) {
    string answer = "";
    int len = s.length();

    if (len % 2 == 0)
    {
        answer += s[len / 2 - 1];
        answer += s[len / 2];
    }
    else
    {
        answer = s[len / 2];
    }

    return answer;
}