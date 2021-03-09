#include <iostream>
#include <vector>
using namespace std;

vector<int> fib{ 0,1 };
int FibonacciNumber(int num)
{
	if (num == 0) return num;
	if (num == 1) return num;

	for (int i = 2; i < num + 1; i++)
	{
		int fibNum = (fib[i - 1] + fib[i - 2]) % 1234567;
		fib.emplace_back(fibNum);
	}
	return fib[num];
}

int solution(int n) {
	int answer = 0;
	answer = FibonacciNumber(n) % 1234567;
	return answer;
}

int main()
{
	cout << solution(100000);
	return 0;
}