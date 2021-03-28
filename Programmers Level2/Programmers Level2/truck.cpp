#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {

	int seconds = 0;
	int truckWeight = 0;
	int count = truck_weights.size();
	queue<int> truck_q;
	queue<int> leftLength_q;

	queue<int> q;

	int i = 0;


	while (true)
	{
		if (count == 0) break;
		if (truck_q.empty())
		{
			//	지나는 트럭이 없음
			// 트럭을 도로에 던지기
			truck_q.push(truck_weights[i]);
			leftLength_q.push(bridge_length);
			truckWeight = truck_weights[i];
			seconds++;
			i++;
		}
		else
		{
			if (i == truck_weights.size())
			{
				seconds += leftLength_q.front();
				break;
			}
			// 지나는 트럭이 있음
			if (leftLength_q.front() > 0)
			{
				leftLength_q.front()--;
			}
			else
			{
				truckWeight -= truck_q.front();
				truck_q.pop();
				leftLength_q.pop();
				count--;
			}
			
			if (truckWeight + truck_weights[i] <= weight)
			{
				truck_q.push(truck_weights[i]);
				leftLength_q.push(bridge_length);
				truckWeight += truck_weights[i];
				i++;
			}
			else
			{
				seconds += leftLength_q.front();
				truck_q.pop();
				leftLength_q.pop();
				count--;
			}
		}

	}


	/*

		q = truck_q;
		cout << "현재 answer값 : " << answer << '\n';
		while (!q.empty())
		{
			cout << "truck: " << q.front() << '\n';
			q.pop();

		}
		q = leftLength_q;
		while (!q.empty())
		{
			cout << "leftlength : " << q.front() << '\n';
			q.pop();

		}*/



	cout << "answer: " << seconds;



	return seconds;
}

int main()
{

	solution(2, 10, { 7,4,5,6 });
	//solution(100, 100, { 10 });
	return 0;
}