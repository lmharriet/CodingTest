#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> GetGCDLCM(int n, int m) {
	vector<int> answer;

	int max = 0, min = 0;
	int GCD = 0, LCM = 0;

	if (n >= m)
	{
		max = n;
		min = m;
	}
	else
	{
		max = m;
		min = n;
	}

	for (int i = 1; i <= min; i++)
	{
		if (max % i == 0 && min % i == 0)
		{
			GCD = i;
		}
	}

	int times[2] = { 1,1 };
	int maxNum = max;

	while (true)
	{
		if (min * times[0] == maxNum)
		{
			LCM = max * times[1];
			break;
		}
		else if (min * times[0] > maxNum)
		{
			times[1]++;
			maxNum = max * times[1];
		}
		else
		{
			times[0]++;
		}
	}
	return { GCD,LCM };
}
//
//int main()
//{
//	solution(86, 2);
//	return 0;
//}