#include<iostream>
#include<string>

/*
N���� ���ڰ� ���� ���� �����ִ�. �� ���ڸ� ��� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

ex)
�Է�
5
54321

���
15
*/
using namespace std;
int SumStrNumber()
{
	int N;
	cin >> N;
	char* number = new char[N];

	int total = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> number[i];
		total += (number[i] - 48);
	}

	cout << total;
	return 0;
}