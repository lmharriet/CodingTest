#include <string>
#include <vector>
#include <iostream>
using namespace std;
/*
¦�� Ȧ��
���� num�� ¦���� ��� Even�� ��ȯ�ϰ� Ȧ���� ��� Odd�� ��ȯ�ϴ� �Լ�, solution�� �ϼ����ּ���.

���� ����
num�� int ������ �����Դϴ�.
�� ¦���Դϴ�.

*/
string solution(int num) {
    string even = "Even";
    string odd = "Odd";
    if (num % 2 == 0) return even;
    else return odd;
}