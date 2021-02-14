#include <iostream>
#include <vector>
#include <map>

using namespace std;

string Marathon(vector<string> participant, vector<string> completion) {
	string answer = "";

	int size = participant.size();
	//   key  value
	map<string,int> m;
	for (int i = 0; i < size; i++)
	{
		string name = participant[i];
		m[name]++;
	}

	for (int i = 0; i < size - 1; i++)
	{
		string name = completion[i];
		m[name]--;
	}

	map<string, int>::iterator iter;
	for (iter = m.begin(); iter != m.end(); ++iter)
	{
		if (iter->second != 0)
		{
			answer = iter->first;//+=,=
			break;
		}
	}
	
	return answer;
}
//
//int main()
//{
//	cout << Marathon({ "leo", "kiki", "eden" }, { "eden", "kiki" }) << '\n';
//	cout << Marathon({ "marina", "josipa", "nikola","vinko","filipa" }, { "josipa", "filipa", "marina", "nikola" }) << '\n';
//	cout << Marathon({ "mislav", "stanko", "mislav","ana" }, { "stanko", "ana","mislav" }) << '\n';
//
//	return 0;
//}