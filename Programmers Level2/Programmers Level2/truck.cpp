#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
	int second = 0;
	int truckIdx = 0;
	int truckWeight = 0;
	queue<int> q;
	while (true)
	{
		second++;

		if (q.size() == bridge_length)
		{
			truckWeight -= q.front();
			q.pop();
			second++;
		}

		if (truckWeight + truck_weights[truckIdx] <= weight)
		{
			if (truckIdx == truck_weights.size() - 1)
			{
				second += bridge_length;
				break;
			}
			q.push(truck_weights[truckIdx]);
			truckWeight += truck_weights[truckIdx];
			truckIdx++;
		
		}
		else
		{
			q.push(0);
		}

	}
	return second;
}


//
//int main()
//{
//	cout<<solution(2, 10, { 7,4,5,6 }) << '\n';
//	cout<<solution(100, 100, { 10,10,10,10,10,10,10,10,10,10 })<<'\n';
//	cout<<solution(100, 100, { 10 });
//	return 0;
//}