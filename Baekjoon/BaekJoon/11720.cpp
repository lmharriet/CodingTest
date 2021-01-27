#include<iostream>
#include<string>

/*
N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.

ex)
입력
5
54321

출력
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