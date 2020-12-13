#include <iostream>
#include <string>
#include <vector>

using namespace std;
/*
����
���̰� ���� �� 1���� ���� �迭 a,b�� �Ű������� �־����ϴ�.
a��b�� ������ return �ϵ��� solution �Լ��� �ϼ����ּ���.

�̶�,a�� b�� ������ a[0]*b[0] +a[1]*b[1] + ......+ a[n-1]*b[n-1] �Դϴ�.(n�� a,b�� ����)

���ѻ���
a,b�� ���̴� 1�̻� 1,000�����Դϴ�.
a,b�� ��� ���� -1000�̻� 1000�����Դϴ�.

*/

int innerProduct(vector<int> a, vector<int> b) {
    int answer = 0;

    for (int i = 0; i < a.size(); i++)
    {
        answer += a[i] * b[i];
    }

    return answer;
}
