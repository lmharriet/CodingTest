#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
	string ab = to_string(a) + to_string(b);
	string ba = to_string(b) + to_string(a);
	if (to_string(a).length() != to_string(b).length())
	{
		return stol(ab) >stol(ba) ;
	}

	return a > b;
}

string solution(vector<int> numbers) {
	string answer = "";
	sort(numbers.begin(), numbers.end(), compare);

	for (int i = 0; i < numbers.size(); i++)
	{
		answer += to_string(numbers[i]);
	}
	if (answer.front() == '0')return "0";
	return answer;
}

int main()
{
	cout << solution({ 3, 30, 34, 5, 9 }) << '\n';
	cout << solution({ 6, 10, 2 })<<'\n';
	cout << solution({ 0,0 })<<'\n';


	return 0;
}