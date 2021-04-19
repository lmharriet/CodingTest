#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
	int answer = 0;
	int size = absolutes.size();
	for (int i = 0; i < size; i++)
	{
		if (!signs[i])
			answer += absolutes[i] * -1;
		else
			answer += absolutes[i];
	}
	return answer;
}

//int main()
//{
//	cout << solution({ 4,7,12 }, { true,false,true })<<'\n';
//	cout << solution({ 1,2,3 }, { false, false, true });
//	return 0;
//}