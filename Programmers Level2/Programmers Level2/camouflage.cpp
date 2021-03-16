#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<vector<string>> clothes) {
	int answer = 1;
	unordered_map<string, int> m;
	int clothesSize = clothes.size();

	for (int i = 0; i < clothesSize; i++)
	{
		m[clothes[i][1]] += 1;
	}

	for (auto& it : m)
	{
		answer *= (it.second + 1);
	}

	return answer - 1;
}

int main()
{
	cout << solution({ { "yellowhat", "headgear" }, { "bluesunglasses", "eyewear" }, { "green_turban", "headgear" } }) << '\n';

	cout << solution({ { "crowmask", "face" }, { "bluesunglasses", "face" }, { "smoky_makeup", "face"} });

	return 0;
}