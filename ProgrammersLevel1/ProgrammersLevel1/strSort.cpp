#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int idx;
bool compare(string a, string b)
{
	if (a[idx] == b[idx])
	{
		return a < b;
	}
	return a[idx] < b[idx];
}

vector<string> strSort(vector<string> strings, int n) {
	vector<string> answer;

	idx = n;

	sort(strings.begin(), strings.end(), compare);

	int size = strings.size();
	for (int i = 0; i < size; i++)
	{
		answer.emplace_back(strings[i]);
	}

	return answer;
}
//
//int main()
//{
//	//solution({ "sun", "bed", "car" }, 1);
//	auto output = strSort({ "abce", "abcd", "cdx" }, 2);
//	
//	for (auto it : output)
//	{
//		cout << it << " ";
//	}
//
//
//	return 0;
//}
