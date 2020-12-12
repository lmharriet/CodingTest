#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
1937�� Collatz�� ����� ���� ����� �� ������, �־��� ���� 1�� �ɶ����� ���� �۾��� �ݺ��ϸ�, ��� ���� 1�� ���� �� �ִٴ� �����Դϴ�.
�۾��� ������ �����ϴ�.
1-1.�Էµ� ���� ¦����� 2�� �����ϴ�.
1-2.�Էµ� ���� Ȧ����� 3�� ���ϰ� 1�� ���մϴ�.
2.����� ���� ���� ���� �۾��� 1�� �� ������ �ݺ��մϴ�.

���� ���, �Էµ� ���� 6�̶�� 6-3-10-5-16-8-4-2-1�� �Ǿ� �� 8�� ���� 1�� �˴ϴ�.

�� �۾��� �� ���̳� �ݺ��ؾ��ϴ��� ��ȯ�ϴ� �Լ� solution�� �ϼ��� �ּ���.

��, �۾��� 500���� �ݺ��ص� 1�� ���� �ʴ´ٸ� -1�� ��ȯ�� �ּ���.
*/
//CollatzConjecture
int CollatzConjecture(int num) {
    int answer = 0;

    //���� ���� int�� ������ �Ѿ�� ��츦 ���
    long long temp = num;

    while (temp != 1)
    {
        if (temp % 2 == 0) temp /= 2;
        else temp = temp * 3 + 1;

        answer++;

        if (answer == 500) return -1;
    }

    return answer;
}

//int main()
//{
//    cout << solution(6);
//}