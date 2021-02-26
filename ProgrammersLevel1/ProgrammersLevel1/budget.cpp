#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int Budget(vector<int> d, int budget) {
	int answer = 0;
	int size = d.size();
	sort(d.begin(), d.end());

	for (int i = 0; i < size; i++)
	{
		if (budget - d[i] >= 0)
		{
			budget -= d[i];
			answer++;
		}
	}

	return answer;
}
//
//int main()
//{
//	//Budget({ 11,3,2,5,6,1 }, 9);
//	cout << Budget({ 11,3,2,5,6,1 }, 9) << '\n';
//	cout << Budget({ 1,3,2,5,4 }, 9) << '\n';
//	cout << Budget({ 2,2,3,3 }, 10);
//	return 0;
//}