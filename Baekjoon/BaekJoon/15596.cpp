#include <iostream>
#include <vector>

using namespace std;

long long sum(std::vector<int>& a) {
	long long ans = 0;


	//for�� �ѹ� �������� a.size();
	int max = a.size();
	for (int i = 0; i < max; i++)
	{
		ans += a[i];
	}

	return ans;
}
