#include<iostream>

using namespace std;
/*
���簢�� �����
���� ����
�� �������� ǥ�� �Է����� �� ���� ���� n�� m�� �־����ϴ�.
��(*) ���ڸ� �̿��� ������ ���̰� n, ������ ���̰� m�� ���簢�� ���¸� ����غ�����.

���� ����
n�� m�� ���� 1000 ������ �ڿ����Դϴ�.
*/
int main(void) {
    int a;
    int b;
    cin >> a >> b;
    if (a <= 1000 && b <= 1000) {
        for (int i = 0; i < b; i++)
        {  
            for (int j = 0; j < a; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    return 0;
}