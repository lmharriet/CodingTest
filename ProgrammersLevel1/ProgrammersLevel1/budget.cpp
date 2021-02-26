#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> d, int budget) {
	int answer = 0;
	int size = d.size();
	sort(d.begin(), d.end());
	
	for (int i = 0; i < size; i++)
	{
		if (budget -d[i]>= 0)
		{
			budget -= d[i];
			answer++;
		}
	}
	return answer;
}

int main()
{

	
	//solution({ 11,3,2,5,6,1 }, 9);
	cout << solution({ 11,3,2,5,6,1 }, 9) << '\n';
	cout << solution({ 1,3,2,5,4 }, 9) << '\n';
	cout << solution({ 2,2,3,3 }, 10);
	return 0;
}