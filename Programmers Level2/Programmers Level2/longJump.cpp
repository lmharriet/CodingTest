#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long fib(int n)
{
	vector<long long> fib_array{ 0,1 };
	for (int i = 2; i < n + 1; i++)
	{
		long long num = fib_array[i - 1] + fib_array[i - 2];
		fib_array.emplace_back(num % 1234567);
	}

	return fib_array[n];
}

long long solution(int n) {

	return fib(n + 1);
}

//int main()
//{
//	cout << solution(4) << '\n';
//	cout << solution(3);
//	return 0;
//}