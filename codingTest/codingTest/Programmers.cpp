#include <iostream>

using namespace std;

int solution(int n)
{
	int answer = 0;

	int num = n;

	while (true)
	{
		int last = num % 10;

		answer += last;
		num /= 10;

		if (num == 0)break;
	}

	return answer;
}

int main()
{
	solution(1324);

	return 0;
}