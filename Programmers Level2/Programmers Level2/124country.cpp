#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(int n) {
	string answer = "";

	while (n > 0)
	{
		if (n % 3 == 0)
		{
			answer += "4";
			n = (n-1) /3 ;
		}
		else
		{
			answer += to_string(n % 3);
			n /= 3;
		}
	}
	reverse(answer.begin(),answer.end());
	return answer;
}

int main()
{
	cout <<"10����:3"<<"->"<<"124������ ����:" << solution(3)<<'\n';
	cout <<"10����:4"<<"->"<<"124������ ����:" << solution(4)<<'\n';
	cout <<"10����:5"<<"->"<<"124������ ����:" << solution(5)<<'\n';
	cout <<"10����:6"<<"->"<<"124������ ����:" << solution(6)<<'\n';
	cout <<"10����:7"<<"->"<<"124������ ����:" << solution(7)<<'\n';
	cout <<"10����:8"<<"->"<<"124������ ����:" << solution(8)<<'\n';
	cout <<"10����:9"<<"->"<<"124������ ����:" << solution(9)<<'\n';
	return 0;
}