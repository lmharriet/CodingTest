#include <iostream>
#include <vector>
using namespace std;

//두 정수 사이의 합
long long solution(int a, int b) {
	long long answer = 0;

	if (a == b)return a;

	if (b < a) swap(a, b);

	for (int i = a; i <= b; i++)
	{
		answer += i;
	}

	return answer;
}

int main()
{
	cout <<solution(9,2);

	return 0;
}