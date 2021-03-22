#include <iostream>
#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
	//20 15
	if (a < b) swap(a, b);
	while (b != 0)
	{
		int remainder = a % b; // 5
		a = b;//15
		b = remainder;//5
	}

	//15,5  5,0

	return a;
}

int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

int solution(vector<int> arr) {
	int answer = arr[0];
	int size = arr.size();
	for (int i = 1; i < size; i++)
	{
		answer = lcm(answer, arr[i]);
	}
	return answer;
}

int main()
{
	solution({ 1,2,3 });
	return 0;
}