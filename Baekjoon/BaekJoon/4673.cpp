#include <iostream>

using namespace std;
/*
self number
*/
int solutuon(int n)
{
	int sum = n;

	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
	}

	return sum;
}
//
//int main()
//{
//	//1 ~ 10000
//	int number[10001] = { false, };
//
//	for (int i = 1; i < 10001; i++)
//	{
//		int output = solutuon(i);
//
//		if (output <= 10000)
//		{
//			number[output] = true;
//		}
//	}
//
//	for (int i = 1; i < 10001; i++)
//	{
//		if (!number[i]) cout << i << '\n';
//	}
//
//	return 0;
//}