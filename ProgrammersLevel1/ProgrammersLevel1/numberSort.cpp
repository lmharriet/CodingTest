#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

long long DescendSort(long long n) {
	long long answer = 0;
	long long num = n;
	vector<long long> remainder;

	while (num)
	{
		remainder.emplace_back(num % 10);
		num /= 10;
	}

	int size = remainder.size();

	for (int i = 0; i < size -1; i++)
	{
		for (int j = i + 1; j < size;j++)
		{
			if (remainder[i] < remainder[j])
			{
				swap(remainder[i], remainder[j]);
			}
		}
	}
	
	int idx = 0;
	for (int i = 0; i < size; i++)
	{
		idx = (size - 1) - i;
		answer += remainder[idx] * pow(10, i);
	}
	

	return answer;
}

//int main()
//{
//	cout<< numberSort(118372);
//	return 0;
//}