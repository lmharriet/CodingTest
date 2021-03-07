#include <iostream>
#include <vector>
#include <string>

using namespace std;
vector<int> StockPrices(vector<int> prices)
{
	vector<int> answer;
	int count = 0;
	int size = prices.size();
	for (int now = 0; now < size; now++)
	{
		for (int secLater = now +1; secLater < size; secLater++)
		{
			if (prices[now] <= prices[secLater])
			{
				count++;
			}
			else if (prices[now] > prices[secLater])
			{
				count++;
				break;
			}
		}
		answer.emplace_back(count);
		count = 0;
	}
	answer.back() = 0;
	return answer;
}
//int main()
//{
//	vector<int> v = solution({ 1, 2, 3, 2, 3 ,1});
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << " , ";
//	}
//	return 0;
//}